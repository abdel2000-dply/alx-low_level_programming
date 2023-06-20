#!/bin/bash
wget -P /tmp https://github.com/Youness187/alx-low_level_programming/raw/main/0x18-dynamic_libraries/lib101.so
export LD_PRELOAD=/tmp/lib101.so
