#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;
int main (int argc, char** argv){
	
    	
	int n,i,j,tam;
	int *a=0;
	for(int cont=5;cont<=50;cont+=5){
	n=cont;
	for(i=0;i<n;i++){
		a=new int[n];
		for(j=0;j<n;j++){
			a[j]=j*i;
			cout<<a[j];
		}
		delete a;	
		
	}
		tam= sizeof(a)+ sizeof(n)+sizeof(i)*n+sizeof(j);
		cout<<" "<<tam<<endl;
		
}
}
