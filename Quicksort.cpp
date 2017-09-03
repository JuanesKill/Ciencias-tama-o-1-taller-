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
    int a[N];
//    int a[50]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50};
    srand(time(NULL));
    for (int i = 0; i < N; i++) {
        a[i] = rand() % 100;
    }
    StartCounter();
    ordenrapido(a, 0, N);
    cout << GetCounter() <<"\n";
    for(int i=0; i<N; i++){
		cout<<a[i]<<"-";
	}
}

