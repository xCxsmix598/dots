#!/usr/bin/env bash

STEP=5

case "$1" in
up)
  brightnessctl set +$STEP%
  ;;
down)
  brightnessctl set $STEP%-
  ;;
esac

BRIGHTNESS=$(brightnessctl -m | cut -d',' -f4 | tr -d '%')

swaync-client -rs
notify-send -h string:x-canonical-private-synchronous:brightness \
  -h int:value:$BRIGHTNESS \
  "󰃠 Brightness" "$BRIGHTNESS%"
