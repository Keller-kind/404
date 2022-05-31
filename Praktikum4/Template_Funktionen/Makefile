all: Templates

Templates: Templates.o
	g++ -o Templates Templates.cpp  -std=c++2a

Templates.o: Templates.cpp functions.h
	g++ -c Templates.cpp -std=c++2a
