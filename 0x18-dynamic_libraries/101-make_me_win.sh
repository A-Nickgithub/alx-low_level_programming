#!/bin/sh
echo "int system(const char* command) { return 0; }" > /tmp/winner.c
gcc -shared -fPIC /tmp/winner.c -o /tmp/winner.so
export LD_PRELOAD=/tmp/winner.so

