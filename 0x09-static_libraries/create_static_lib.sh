#!/bin/bash
gcc -Wall -pedantic -Wextra -c *.c
ar -rcc liball.a *.o
ranlib liball.a
