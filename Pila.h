#ifndef PILA_H
#define PILA_H
#include "Simbolo.h"
#include <iostream>
#include <string>
using namespace std;
class Pila{

public:

  Simbolo* direccion;
  Pila();
  Pila(Simbolo*);
  void apilar(char);
  Simbolo* desapilar();
  Simbolo* tope();
  bool estaVacia();


};

#endif
