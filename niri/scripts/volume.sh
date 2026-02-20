#!/usr/bin/env bash

STEP=5

case "$1" in
up)
  pamixer -i $STEP
  ;;
down)
  pamixer -d $STEP
  ;;
mute)
  pamixer -t
  ;;
esac

VOLUME=$(pamixer --get-volume)
MUTED=$(pamixer --get-mute)

if [ "$MUTED" = "true" ]; then
  swaync-client -rs
  notify-send -h string:x-canonical-private-synchronous:volume \
    -h int:value:0 \
    "󰖁 Muted"
else
  swaync-client -rs
  notify-send -h string:x-canonical-private-synchronous:volume \
    -h int:value:$VOLUME \
    "󰕾 Volume" "$VOLUME%"
fi
