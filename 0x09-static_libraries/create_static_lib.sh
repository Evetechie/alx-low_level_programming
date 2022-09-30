#!/bin/bash
gcc -wall -pedantic -werror -Wextra -c *.c
ar rc liball.a *.o
