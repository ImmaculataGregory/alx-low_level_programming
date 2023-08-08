#!/bin/bash

# compile all .c files in the current directory into object files
gcc -c *.c

# create the static library liball.a from all the generated objects files
ar rcs liball.a *.o

# clean up by removing the object files
rm -f *.o

