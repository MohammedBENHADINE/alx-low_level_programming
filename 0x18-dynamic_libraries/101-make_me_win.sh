#!/bin/bash
wget -P /tmp https://github.com/MohammedBENHADINE/alx-low_level_programming/tree/main/0x18-dynamic_libraries/hook.so
export LD_PRELOAD=/tmp/hook.so
