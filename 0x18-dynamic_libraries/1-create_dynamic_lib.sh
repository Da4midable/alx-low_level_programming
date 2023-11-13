#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -c -fpic *.c
gcc *.o -shared -o liball.so
export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH
