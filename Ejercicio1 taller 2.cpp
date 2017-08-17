#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

	struct nodo{
		int x,y;
		nodo *sig;
	};
	
int main (int argc, char** argv){
	int n, i;

	nodo *cab = NULL, *aux;
	cin>>n;
	for(i=0; i<n; i++){
		aux = new nodo;
		aux -> x = i;
		aux -> y = n - i;
		aux -> sig = cab;
		cab = aux;
	}
	aux = cab;
	while (aux!=NULL){
		cout<< aux->x<< aux->y<<endl;
		aux = aux -> sig;
	}
	for(aux=cab->sig; aux!=NULL; aux=aux->sig){
		delete cab;
		cab = aux;
	}
}
