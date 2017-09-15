#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#include <stdio.h>

using namespace std;
double PCFreq = 0.0;
__int64 CounterStart = 0;

void StartCounter()
{
    LARGE_INTEGER li;
    if(!QueryPerformanceFrequency(&li))
    cout << "QueryPerformanceFrequency failed!\n";

    PCFreq = double(li.QuadPart);

    QueryPerformanceCounter(&li);
    CounterStart = li.QuadPart;
}
double GetCounter()
{
    LARGE_INTEGER li;
    QueryPerformanceCounter(&li);
    return double(li.QuadPart-CounterStart)/PCFreq;
}
int Mayor( int num[], int pos){
	int aux;
	if(pos==0){
		return num[pos];	
	} else{
		aux= Mayor(num, pos-1);
		if( num[pos] > aux){
			return num[pos];	
		}
		else{
			return Mayor(num, pos-1);
		}
	}
}
int main(){
	int n, pos,sol;
	cout<<" Digite un tamaño ";
	cin>>n;
	int a[n];
	pos=n-1;
	srand(time(NULL));
    for (int i = 0; i <n; i++) {
        a[i] = rand() % 100;
    }
    StartCounter();
    sol= Mayor(a,pos);
    cout << GetCounter() <<"\n";
    cout<< sol <<" ";
    for(int i=0; i<n; i++){
		cout<<a[i]<<"-";
	}
}
