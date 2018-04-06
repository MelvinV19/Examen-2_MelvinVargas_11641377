#include "Simbolo.h"

Simbolo::Simbolo(){

}

Simbolo::Simbolo(char simbolo){
  this->simbolo=simbolo;

}

char Simbolo::getSimbolo(){
  return simbolo;
}

void Simbolo::setDireccion(Simbolo* pasado){
  this->pasado=pasado;
}

Simbolo* Simbolo::getDireccion(){
  return pasado;
}
