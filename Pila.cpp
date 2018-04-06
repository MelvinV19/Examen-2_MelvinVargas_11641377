#include "Pila.h"

Pila::Pila(){

}

Pila::Pila(Simbolo* direccion){
  this->direccion=direccion;

}


void Pila::apilar(char simbolo){
  Simbolo* a= new Simbolo(simbolo);
  if (direccion==NULL) {
  direccion=a;
  }else{
    a->setDireccion(direccion);
    direccion=a;
  }
}
Simbolo* Pila::desapilar(){
  if (direccion!=NULL) {
    Simbolo* temp=direccion;
    direccion=direccion->getDireccion();
    return temp;
  }else{
    return direccion;
  }

}
Simbolo* Pila::tope(){
  return direccion;
}
bool Pila::estaVacia(){
  if(direccion==NULL){
    return true;
  }else{
    return false;
  }

}
