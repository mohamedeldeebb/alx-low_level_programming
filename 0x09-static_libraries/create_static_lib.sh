#!/bin/bash
gcc - wall -pedantic -warror -waxtra -c *.c
ar -rc liball.a *.o
ranlib liball.a
