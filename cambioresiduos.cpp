#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#include <stdio.h>

using namespace std;

double PCFreq = 0.0;
__int64 CounterStart = 0;

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

inline bits (int x, int k, int j){
	return (x>>k)&~(~0<<j);
}

intercambio(int a[], int min, int i){
     int temp=0;
	 temp=a[min];
     a[min]=a[i];
     a[i]=temp;
}

void cambioresiduos(int a[], int izq, int der, int b){
	int i,j;
	int t;
	if (der>izq && b>0){
		i= izq;
		j=der;
		while(j!=i){
			while(!bits(a[i],b,1) && i<j)i++;
            while(bits(a[j],b,1) && j>i)j--;
			intercambio(a, i, j);
        }
        if (!bits(a[i],b,1)) j++;
		cambioresiduos(a, izq, j-1, b-1);
		cambioresiduos(a, j, der, b-1);
    }
}


int main(){
	int N;
    cout << "Ingresa el tamanyo del array" << endl;
    cin >> N;
	int a[N];
	srand(time(NULL));
    for (int i = 0; i < N; i++) {
        a[i] = rand() % 100;
    }
    StartCounter();
    cambioresiduos(a, 0, N, 30);
    cout << GetCounter() <<"\n";
    for(int i = 0; i < N; i++){
		cout<<a[i]<<"  ";
	}
}
