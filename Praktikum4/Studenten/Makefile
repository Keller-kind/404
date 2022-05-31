######################################################################
# @author      : Leopold Keller (leopold.keller@stud.h-da.de)
# @file        : Makefile
# @created     : Monday May 30, 2022 15:38:53 CEST
######################################################################
all: main

main: main.o zug.o student.o
	g++ -o main main.cpp zug.cpp student.cpp -g

zug.o: zug.cpp zug.h
	g++ -c zug.cpp -g

student.o: student.cpp student.h
	g++ -c student.cpp -g

main.cpp:
	g++ -c main.cpp -g
