#!/usr/bin/env bash

color1=$(sed -n "3p" $HOME/.cache/wal/colors)
color2=$(sed -n "10p" $HOME/.cache/wal/colors)

sed -i "184c\       active-gradient from=\"$color1\" to=\"$color2\" angle=145" $HOME/.config/niri/config.kdl
