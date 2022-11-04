#!/bin/bash
gcc -c *.c | ar -rc *.o liball.a | ranlib liball.a
