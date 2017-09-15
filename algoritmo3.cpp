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
calcular(int a, int b){
	if (b == 0){
		return a;
	}
	else{
		return calcular(b, a%b);
	}
}

int main(){
	int a, b,z;
	cin>>a;
	cin>>b;
	StartCounter();
	z= calcular(a,b);
	
	cout << GetCounter() <<"\n";
	
	cout<<z<<endl;
	
}
