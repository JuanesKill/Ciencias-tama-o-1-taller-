#include <cstdlib>
#include <iostream>
#include <ctype.h>
#include <iomanip>
#include "pila.h"
#include "cola.h"

using namespace std;

Reemplazar(pila Pila1,int viejo, int nuevo){
	cola Cola;
	pila Pila=Pila1;
	while(Pila.PilaVacia()==false){
			int x=Pila.Pop()-48;
			if(x==viejo){
				Cola.InsCola(nuevo+48);
			}else{
				Cola.InsCola(x+48);
			}
	}
	
	Cola.ImprimirCola();
	return 0;
}
/*
Organizar(pila Pila1, pila Pila2){
	pila pilaa=Pila1;
	pila pilad=Pila2;
	pila pilaor;
	while(pilaa.PilaVacia()==false){
			int x=pilaa.Pop()-48;
			int y=pilad.Pop()-48;
			int i=0;
			cout<<"hola1";
			while(pilad.PilaVacia()==false){
				pilaa.Push(y+48);
				y=pilad.Pop()-48;
				i++;
				cout<<"hola2";
			}
			if(x<=y){
				pilaor.Push(x+48);
				cout<<"hola3";
			}else{
				pilaor.Push(y+48);
				i--;
				cout<<"hola4";
			}
			for(int j=0;j<i;j++){
				cout<<"hola5";
				pilad.Push(pilaa.Pop());
			}
	}
	cout<<"hola";
	while(pilaor.PilaVacia()==false){
		cout<<pilaor.Pop();
	}
}*/
Factorial(int n){
	int x=1;
	pila pilafac;
	for(int i=1;i<=n;i++){
		pilafac.Push(i+48);
	}
	while(pilafac.PilaVacia()==false){
		x=x*(pilafac.Pop()-48);
	}
	cout<<x;
}


Palindromo(char cadena[]){
	pila Pila;
	int i=0;
	char y;
	while(cadena!=""){
		Pila.Push(cadena[i]);
		i++;	
	}
	if((i % 2)==0){
		char x=Pila.Pop();
		//Palindromo(cadena[1,i-1]);
		for(int j=0;j<i-1;j++){
			 y=Pila.Pop();
		}
		if(x==y){
			cout<<"es una cadena palindroma";
		}else{
			cout<<"no es palindroma";
		}	
	}	
}

int main(int argc, char *argv[])
{ 
//	pila Pila; 
//	Pila.Push('3');
//	Pila.Push('5');
//	Pila.Push('2');
//	Pila.Push('3');
//	Reemplazar(Pila,3,7);
//	pila Pila; 
//	Pila.Push('1');
//	Pila.Push('2');
//	Pila.Push('3');
//	Pila.Push('4');
//	pila Pila1; 
//	Pila1.Push('10');
//	Pila1.Push('9');
//	Pila1.Push('8');
//	Pila1.Push('7');	
//	Organizar(Pila,Pila1);
//	Factorial(6);
	char cadena[]="poop";
	Palindromo(cadena);
    return EXIT_SUCCESS;
}


