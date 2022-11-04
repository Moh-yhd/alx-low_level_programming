#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -c *.c | ar -rc *.o liball.a | ranlib liball.a
