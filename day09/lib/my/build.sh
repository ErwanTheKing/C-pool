#!/bin/sh -e
epiclang -c *.c -I ../../Include/libmy.h
ar rc libmy.a *.o
