#include <iostream>
#include "listacircular.h"
#include <stdio.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
struct Estud{
	string nombre;
	long int codigo;
	string carrera;
};

int main(int argc, char** argv) {
	/*Lista <int> lint;
	Lista <float> lfloat;
	nodo <int> *nuevo;
	nuevo= new nodo <int>;
	nuevo->dato=3;
	nodo <int> *nuevo1;
	nuevo1= new nodo <int>;
	nuevo1->dato=8;
	nodo <int> *nuevo2;
	nuevo2= new nodo <int>;
	nuevo2->dato=10;	
	nodo <float> *nuevo3;
	nuevo3= new nodo <float>;
	nuevo3->dato=3.5;
	nodo <float> *nuevo4;
	nuevo4= new nodo <float>;
	nuevo4->dato=8.2;
	nodo <float> *nuevo5;
	nuevo5= new nodo <float>;
	nuevo5->dato=3.3;
	lint.insertar_final(nuevo);
	lint.insertar_inicio(nuevo1);
	lint.insertar_pos(nuevo2,2);
	lfloat.insertar_inicio(nuevo3);
	lfloat.insertar_final(nuevo4);
	lfloat.insertar_pos(nuevo5,2);
	int i=1;
	while(!lint.lista_vacia()){
		cout<<lint.eliminar_pos(i);
	}
	system("pause");
	cout<<lfloat.consultar(1);
/*	while(!lfloat.lista_vacia()){
		cout<< lfloat.eliminar_pos(i)<<" ";
	}
	cout<<lfloat.eliminar_pos(1);
	*/
	nodo <Estud> *a;
	a= new nodo <Estud>;
	nodo <Estud> *a1;
	a1= new nodo <Estud>;
	nodo <Estud> *a2;
	a2= new nodo <Estud>;
	Lista<Estud> lestud;
	a->dato.nombre="pedro";
	a->dato.codigo=20151020;
	a->dato.carrera="sistemas";
	lestud.insertar_pos(a,1);
	a1->dato.nombre="juan";
	a1->dato.codigo=2014204;
	a1->dato.carrera="electrica";
	lestud.insertar_inicio(a1);
	a2->dato.nombre="daniel";
	a2->dato.codigo=2012204;
	a2->dato.carrera="industrial";
	lestud.insertar_final(a2);
	int i=1;
	while(i<=lestud.tamano_lista()){
		nodo <Estud> *resul;
		resul= new nodo <Estud>;
		resul->dato= lestud.consultar(i);
		cout<< resul->dato.nombre;
		i++;
		delete resul;
	}
		
	return 0;
}
