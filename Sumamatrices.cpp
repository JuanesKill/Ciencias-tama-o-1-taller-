#include <cstdlib>
#include <iostream>
#include <time.h>
#include <fstream>
#include <stdio.h>
#include <windows.h>
#include <fstream>

using namespace std;
int n;

template<class T>
void Sumar(T *a, T *b, int n){
	T matrizc[5][5];
	T *Pc;
 	Pc=matrizc[0];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			matrizc[i][j]= (*(a+j)+i) + ((*(b+j)+i));
 			cout<<*(*(matrizc+i)+j)<<"	";
 			
		}
		cout<< endl;
	
	}
}

void LlenadoMatriz(int A[][5], int B[][5], int n){
	int i, j;
	srand(time(NULL));
	for(i=0; i<n; i++){
    	for(j=0; j<n; j++){
			A[i][j]= rand() % 100;
			B[i][j]= rand() % 100;
        }
    }
    Sumar(*A, *B, n);
}

int main(){

	cout<< "Digite el tamaño de las matrices nxn: ";
	cin>>n;
//	char a[n][n], b[n][n];
	int a[5][5], b[5][5], *Pa, *Pb;
	Pa = a[0];
	Pb = b[0];
	LlenadoMatriz(a,b,5);
	cout<< endl;	
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			cout<< *(*(a+i)+j) << "	";
		}
    	cout<<endl;
	}
	cout<<endl;
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			cout<< *(*(b+i)+j) << "	";
		}
    	cout<<endl;
	}
	

//	Sumar(a, b, n);
	
}
