#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <windows.h>
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

intercambio(int a[], int min, int i){
     int temp=0;
	 temp=a[min];
     a[min]=a[i];
     a[i]=temp;
}

Seleccion (int a[], int N)
{int i,j,min;
StartCounter();
   for (i=0;i<N; i++)
       {min = i;
         for (j=i+1;j<N; j++){
	 		if(a[j]<a[min]) {
			 	min = j;
			 }
         	intercambio(a, min, i);	
        }
    //cout<<a[i]; 
	   
}
cout << GetCounter() <<"\n";
}
burbuja (int a[], int N)
{int i,j;
StartCounter();
  for (i=N; i>0; i--){
     for(j=1; j<i; j++){
           if(a[j-1]> a[j]){
        		intercambio(a,j-1,j);
        	}
       }
       
}
cout << GetCounter() <<"\n";
for(i=0;i<N;i++){
	cout<<a[i];
}
}
Insercion (int a[], int N)
{int i,j,v;
StartCounter();
  for (i=1; i<N; i++)
     {j=i; v=a[j];
       while(j>=1 && a[j-1]>v)
         {a[j]=a[j-1];
           j--;
         }
        a[j]= v;
      }
cout << GetCounter() <<"\n";
for(i=0;i<N;i++){
	cout<<a[i];
}
}





int main (int argc, char** argv){
	int a[50]={51,50,49,48,47,46,45,44,43,42,41,40,39,38,37,36,35,34,33,32,31,30,29,28,27,26,25,24,23,22,21,20,19,18,17,16,1514,13,12,11,10,9,8,7,6,5,4,3,2};
	//int a[5]={6,5,4,3,2};
	//Seleccion(a,50);
	//burbuja(a,50);
	Insercion(a,50);
}
