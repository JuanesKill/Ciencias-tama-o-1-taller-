#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

int main (int argc, char** argv){
    int n= 0;
	int k = 0;
	int may = 0;
	int tam = 0;
    int dato=0;
    int cont=1;
    for(cont=1;cont<=50;cont++){
    	n=cont;
    		for(k=1; k<=n; k++){
    		dato= rand();
        		if(dato > may){
        		may = dato;      
        	}
    	}
    	tam = sizeof(may)+ sizeof(n)+sizeof(dato)+sizeof(k);
    	cout<<"El numero mayor es: "<<may<<endl;
    	cout<<"El tamaño total es:"<<tam<<endl;
    	
    }
}

