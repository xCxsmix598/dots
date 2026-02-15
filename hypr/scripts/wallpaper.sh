#!/usr/bin/env bash

# ---- CONFIG ----
WALLPAPER_DIR="$HOME/.wallpapers/"
CACHE_FILE="$HOME/.cache/wallpaper_index"
TRANSITION="center"
TRANSITION_FPS=60
TRANSITION_DURATION=3
TRANSITION_STEP=0

# ---- START swww if not running ----
if ! pgrep -x swww-daemon >/dev/null; then
  swww-daemon &
  sleep 0.5
fi

# ---- Get wallpapers (sorted) ----
mapfile -t WALLPAPERS < <(find "$WALLPAPER_DIR" -type f \( \
  -iname "*.jpg" -o -iname "*.png" -o -iname "*.jpeg" \) | sort)

COUNT=${#WALLPAPERS[@]}

if [ "$COUNT" -eq 0 ]; then
  echo "No wallpapers found in $WALLPAPER_DIR"
  exit 1
fi

# ---- Read last index ----
if [ -f "$CACHE_FILE" ]; then
  INDEX=$(<"$CACHE_FILE")
else
  INDEX=0
fi

# ---- Clamp index ----
if [ "$INDEX" -ge "$COUNT" ]; then
  INDEX=0
fi

WALLPAPER="${WALLPAPERS[$INDEX]}"

cp $WALLPAPER ~/.config/hypr/hyprlock.png

# ---- Apply pywal ----
/home/xyphe/.config/hypr/.venv/bin/python -m pywal -i "$WALLPAPER" --out-dir /home/xyphe/.config/hypr/colors -n &

# ---- Set wallpaper ----
swww img "$WALLPAPER" \
  --transition-type "$TRANSITION" \
  --transition-fps "$TRANSITION_FPS" \
  --transition-duration "$TRANSITION_DURATION"

# ---- Save next index ----
NEXT_INDEX=$(((INDEX + 1) % COUNT))
echo "$NEXT_INDEX" >"$CACHE_FILE"

killall -9 waybar
waybar &
killall -9 swaync
swaync &

export $WALL="$WALLPAPER"
