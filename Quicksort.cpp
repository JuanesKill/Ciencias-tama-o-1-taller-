#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#include <stdio.h>

using namespace std;

double PCFreq = 0.0;
__int64 CounterStart = 0;
int N;

void StartCounter(){
	LARGE_INTEGER li;
    if(!QueryPerformanceFrequency(&li))
    cout << "QueryPerformanceFrequency failed!\n";

    PCFreq = double(li.QuadPart);

    QueryPerformanceCounter(&li);
    CounterStart = li.QuadPart;
}

double GetCounter(){
    LARGE_INTEGER li;
    QueryPerformanceCounter(&li);
    return double(li.QuadPart-CounterStart)/PCFreq;
}

intercambio(int a[], int i, int j){
     int temp=0;
	 temp=a[j];
     a[j]=a[i];
     a[i]=temp;
}

void ordenrapido(int a[], int izq, int der){
	int i, j, v;
	if (der> izq){
		v= a[der]; 
		i = izq -1; 
		j= der;
		for(;;){
			while (a[++i]<v);
				while (a[--j] >v);
					if(i>=j) break;
					intercambio(a,i,j);
        }
       intercambio(a, i, der);
       ordenrapido(a, izq, i-1);
       ordenrapido(a, i+1,der);
	}
}

int main (int argc, char** argv){
	cout<<"Ingresa el tamanyo del array"<<endl;
    cin >> N;
    int a[N], i;
//    ORDENADO
//	for(i = 1; i <= N; i++){
//		a[i] = i;
//	}
//	DESORDENADO
    srand(time(NULL));
    for (i = 1; i <= N; i++) {
        a[i] = rand() % 200;
    }
    StartCounter();
    ordenrapido(a, 1, N);
    cout << GetCounter() <<"\n";
    for(i = 1; i <= N; i++){
		cout<<a[i]<<"  ";
	}
}

