#include <iostream>
#include <string>
#include "Pila.h"
#include "Simbolo.h"

using namespace std;


int menu();


int main(int argc, char const *argv[]) {
  int op;
  Simbolo* direccion;
  Simbolo* num1;
  Simbolo* operador;
  Simbolo* num2;
  Pila* p=new Pila();
  while (op!=2) {
    switch (op=menu()) {
      case 1:{
        if(p->estaVacia()==1){
          cout<<"Verdadero, si esta vacia"<<endl;
        }else{
          cout<<"Falso, no esta vacia"<<endl;
        }
        string operacion;
        cout<<"Ingrese su operacion: "<<endl;
        cin>>operacion;

        for (int i = 0; i < operacion.length(); i++) {
          p->apilar(operacion[i]);
          direccion=p->tope();
          cout<<direccion<<" "<<direccion->getSimbolo()<<endl;
        }
        cout<<endl;

        num1=p->desapilar();
        cout<<num1->getSimbolo()<<endl;
        operador=p->desapilar();
        cout<<operador->getSimbolo()<<endl;
        num2=p->desapilar();
        cout<<num2->getSimbolo()<<endl;

        if(p->estaVacia()==1){
          cout<<"Verdadero, si esta vacia"<<endl;
        }else{
          cout<<"Falso, no esta vacia"<<endl;
        }



        break;
      }
      case 2:{
        delete p;
        break;
      }
    }
  }

  return 0;
}

int menu(){
	int bandera=0;
	int num=0;
	while(bandera==0){
		cout<<"**********Menu***********"<<endl;
    cout<<"1.Ingresar Operacion"<<endl;
    cout<<"2.Salir"<<endl;
		cin>> num;
		return num;
	}
}
