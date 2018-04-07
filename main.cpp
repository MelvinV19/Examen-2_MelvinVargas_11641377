#include <iostream>
#include <string>
#include "Pila.h"
#include "Simbolo.h"

using namespace std;


int menu();


int main(int argc, char const *argv[]) {
  int op;
  Simbolo* direccion;
  Pila* p=new Pila();
  while (op!=2) {
    switch (op=menu()) {
      case 1:{
        /*if(p->estaVacia()==1){
          cout<<"Verdadero, si esta vacia"<<endl;
        }else{
          cout<<"Falso, no esta vacia"<<endl;
        }*/
        string operacion;
        cout<<"Ingrese su operacion: "<<endl;
        cin>>operacion;
        for (int i = 0; i < operacion.length(); i++) {
          p->apilar(operacion[i]);
          direccion=p->tope();
          cout<<direccion<<" "<<direccion->getSimbolo()<<endl;
        }
        cout<<endl;
        int result=0;
        Simbolo*desapilado;
        int cont=0;
        int contelementos=0;
        char operador,num1=' ',num2=' ';
        int num1i=0;
        int num2i=0;
        bool bandera=true;
        int otronum;
        while(p->tope()!=NULL){

          desapilado=p->desapilar();


          //saber si el objeto es un numero
          if(desapilado->getSimbolo()=='1'||desapilado->getSimbolo()=='2'||desapilado->getSimbolo()=='3'||desapilado->getSimbolo()=='4'||desapilado->getSimbolo()=='5'||desapilado->getSimbolo()=='6'||desapilado->getSimbolo()=='7'||desapilado->getSimbolo()=='8'||desapilado->getSimbolo()=='9'){
            if(bandera){
              result=desapilado->getSimbolo()-48;
              bandera=false;
            }else{
              otronum=desapilado->getSimbolo()-48;
              if(operador=='+'){
                result=otronum+result;

              }
              if(operador=='-'){
                result=otronum-result;

              }
              if(operador=='*'){
                result=otronum*result;

              }
              if(operador=='/'){
                result=otronum/result;
              }

            }

          }else if(desapilado->getSimbolo()=='+'||desapilado->getSimbolo()=='-'||desapilado->getSimbolo()=='*'||desapilado->getSimbolo()=='/'){
            operador=desapilado->getSimbolo();
          }

        }

        cout<<"El resultado es: "<<result<<endl;
        /*if(p->estaVacia()==1){
          cout<<"Verdadero, si esta vacia"<<endl;
        }else{
          cout<<"Falso, no esta vacia"<<endl;
        }*/

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
