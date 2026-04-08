#!/usr/bin/bash

if [ ! -f ./src/leetcode$1.cpp ]; then
    cp ./src/leetcode.cpp ./src/leetcode$1.cpp
fi;

code ./src/leetcode$1.cpp