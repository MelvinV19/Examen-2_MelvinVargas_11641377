mu: Pila.o Simbolo.o main.o
	g++ Pila.o Simbolo.o main.o -o mu -lncurses

Pila.o: Pila.h Simbolo.h Pila.cpp
	g++ -c Pila.cpp

Simbolo.o: Simbolo.h Simbolo.cpp
	g++ -c Simbolo.cpp

main.o: Pila.h Simbolo.h main.cpp
	g++ -c main.cpp
