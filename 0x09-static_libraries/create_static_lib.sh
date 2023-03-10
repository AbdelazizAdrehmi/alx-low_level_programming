#!/bin/bash

# a script that creates a static library
# called liball.a from all the .c files
# that are in the current directory

gcc -c *.c
ar cr liball.a *.o
echo y | rm -I *.o
