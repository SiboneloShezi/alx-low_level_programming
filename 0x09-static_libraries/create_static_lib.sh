#!/bin/bash
gcc -Wall -pedantic -werror -c *.c
ar -rc liball.a *.o
ranlib liball.a
	
