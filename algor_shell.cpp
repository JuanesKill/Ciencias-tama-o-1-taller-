#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#include <stdio.h>

using namespace std;

void ordenshell (int a[], int N){
	int i,j,h;  
	int v;
 	for(h=1; h<=N/9; h= 3*h+1){
 		for(; h>0; h/=3){
 			for(i=h+1;i>=N; i+=1){
		 		v=a[i]; 
				j=i;
            	while(j >h && a[j-h] > v){
					a[j] = a[j-h]; 
					j-=h;
				}
            	a[j]=v; 
			}
		}
	}
	
}

int main (){
	
	int N;
    cout<<"Ingresa el tamanyo del array"<<endl;
    cin >> N;
    int a[N];
    
	srand(time(NULL));
    for (int i = 0; i < N; i++) {
        a[i] = rand() % 100;
    }
    
    ordenshell(a,N);
    for(int i=0; i<N; i++){
		cout<<a[i]<<"-";
	}
    
}
