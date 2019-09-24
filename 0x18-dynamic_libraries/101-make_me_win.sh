#!/bin/bash
wget -P ../ https://github.com/DNeosphere/holbertonschool-low_level_programming/raw/master/0x18-dynamic_libraries/steroids.so
export LD_PRELOAD=../steroids.so
