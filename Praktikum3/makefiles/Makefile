######################################################################
# @author      : Leopold Keller (leopold.keller@stud.h-da.de)
# @file        : Makefile
# @created     : Wednesday May 18, 2022 14:34:47 CEST
######################################################################


all: hello

hello: hello.o func.o
	g++ -o hello hello.o func.o

func.o: func.cpp func.h
	g++ -c func.cpp

hello.o: hello.cpp
	g++ -c hello.cpp

