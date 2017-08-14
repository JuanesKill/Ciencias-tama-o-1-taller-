#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;
int main (int argc, char** argv){
	int n,i,j,tam;
	int *a=0;
	cin>> n;
	for(i=0;i<n;i++){
		a=new int[n];
		for(j=0;j<n;j++){
			a[j]=j*i;
			cout<<a[j];
		}
		tam=sizeof(a);
		delete a;	
		
	}
		tam= tam+ sizeof(n)+sizeof(i)+sizeof(j);
		cout<<" "<<tam;
	
}
