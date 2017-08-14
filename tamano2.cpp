#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

int main (int argc, char** argv){
    int n= 0;
	int k = 0;
	int may = 0;
	int tam = 0;
    int dato[50];
    int i = 1;
    //cout<<"Que cantidad de numeros desea"<<endl;
    //cin>>n;
    for(i=1; i<=49; i++){
    	n=i;
		for(k=0; k<=n; k++){
        	dato[k] = 1 + rand() % (101-1);
        	//cout<<"Dato numero "<<k+1<<": "<<dato[k]<<endl;
    	}
    	may = dato[1];
    	for(k=0; k<=n; k++){
        	if(dato[k] > may){
        		may = dato[k];      
        	}
        	tam = tam + sizeof(dato[k]);
    	}
    	tam = tam + sizeof(n) + sizeof(k) + sizeof(may);
    	
    	//cout<<"El numero mayor es: "<<may<<endl;
    	cout<<"El tamaño total es: "<<tam<<endl;
    	tam = 0;
	}
	return 0;
}
