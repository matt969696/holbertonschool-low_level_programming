#!/bin/bash
wget -O /tmp/unrandom.so https://github.com/matt969696/holbertonschool-low_level_programming/raw/master/0x18-dynamic_libraries/unrandom.so
export LD_PRELOAD=/tmp/unrandom.so
