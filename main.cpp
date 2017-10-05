#include <iostream>
#include "listacircular.h"
#include <stdio.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main(int argc, char** argv) {
	Lista <int> lent;
	nodo <int> *nuevo;
	nuevo= new nodo <int>;
	nuevo->dato=9;
	lent.insertar_inicio(nuevo);
	nodo <int> *nuevo1;
	nuevo1 = new nodo <int>;
	nuevo1->dato=8;
	lent.insertar_inicio(nuevo1);
	nodo <int> *nuevo2;
	nuevo2 = new nodo <int>;
	nuevo2->dato=20;
	lent.insertar_final(nuevo2);
	cout<<lent.consultar(1)<<" ";
	cout<<lent.consultar(2)<<" ";
	cout<<lent.consultar(3)<<" ";
	cout<<lent.consultar(4)<<endl;
	nodo<int> *nuevo3;
	nuevo3 = new nodo <int>;
	nuevo3->dato=12;
	lent.insertar_pos(nuevo3,3);
	cout<<lent.consultar(1)<<" ";
	cout<<lent.consultar(2)<<" ";
	cout<<lent.consultar(3)<<" ";
	cout<<lent.consultar(4)<<endl;
	return 0;
}
