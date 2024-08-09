#!/bin/bash
# Create a dynamic library liball.so from all .c files in the current directory

# Remove any existing library
rm -f liball.so

# Compile all .c files into .o files
gcc -c -fPIC *.c

# Create the dynamic library
gcc -shared -o liball.so *.o

# Remove the object files
rm -f *.o
