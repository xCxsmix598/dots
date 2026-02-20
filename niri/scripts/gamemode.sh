#/usr/bin/env bash

status=$(sed -n '1p' /home/xyphe/.config/hypr/hyprland.conf)
config="/home/xyphe/.config/hypr/hyprland.conf"

if [ "$status" == "##REGULAR" ]; then
  ln -sf /home/xyphe/.config/hypr/hyprland-game.bak.conf $config && notify-send "Gamemode Activated!"
else
  ln -sf /home/xyphe/.config/hypr/hyprland.bak.conf $config && notify-send "Gamemode Disabled!"
fi

