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
void f(const char * const prts){
	if (prts[0] == '\0'){
		return;
	}
	else{
		f(&prts[1]);
		cout<<prts[0]<<" ";
	}
}

int main(){
	char *prts = "cincocincocincocincocincocincocincocincocincocincocincocincocincocincocincocincocincocincocincocinco";
	StartCounter();
	f(prts);
	cout << GetCounter() <<"\n";
} 
