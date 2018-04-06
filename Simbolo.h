#ifndef SIMBOLO_H
#define SIMBOLO_H
#include <string>
using namespace std;


class Simbolo{
public:
  Simbolo* pasado;
  char simbolo;
  Simbolo();
  Simbolo(char);
  char getSimbolo();
  void setDireccion(Simbolo*);
  Simbolo* getDireccion();
};


#endif
