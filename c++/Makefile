#!/usr/bin/env make

######
# This Makefile can be customized for your solution, however, we expect
# that it will work out of the box for you.
#
# To use, simply modify {SourceFile}.cpp and re-run 'make'.
######

objects := $(patsubst %.cpp,%.o,$(wildcard *.cpp))

all: $(objects)

%.o: %.cpp
	gcc -o $@ $?
