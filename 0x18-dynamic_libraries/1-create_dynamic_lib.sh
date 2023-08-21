#!/bin/bash

gcc -Wall -Werror -Wextra -pedantic -fPIC -c *.c
gcc -shared -0 liball.so *.o
rm *.o
