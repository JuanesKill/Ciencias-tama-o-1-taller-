#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;
int main (int argc, char** argv){
	int n,i,j;
	int **a=0;
	
	for(int cont=5;cont<=50;cont+=5){
	n=cont;
	a= new int *[n];
		for(i=0;i<n;i++){
			a[i]=new int[n];
			for(j=0;j<n;j++){
				a[i][j]=i*j;	
			}
		}
			for(i=0;i<n;i++){
				for(j=0;j<n;j++){
					cout<< a[i][j];
				}
				delete a[i];
			}
		int tam=sizeof(n)+sizeof(i)*n*n+sizeof(j)+sizeof(j)*n+sizeof(a);
		cout<<" "<<tam<<endl;
}
}

