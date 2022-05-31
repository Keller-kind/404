######################################################################
# @author      : Leopold Keller (leopold.keller@stud.h-da.de)
# @file        : Makefile
# @created     : Tuesday May 31, 2022 11:05:55 CEST
######################################################################

all: main

main: main.o point.o
	g++ -o main main.cpp point.cpp

point.o: point.cpp point.h
	g++ -c point.cpp

main.o:
	g++ -c main.cpp
