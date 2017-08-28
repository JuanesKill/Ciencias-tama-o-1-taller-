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
 int binary_search(int *array, int searched, int arraySize)
{
	
    int first = 0;
    int middle;
    int last = arraySize - 1;
 	
    while (first <= last) {
        middle = (first + last) / 2;
        if (searched == array[middle]) {
            //cout << "Se encuentra en la posición " << middle + 1 << endl;
            return array[middle];
        } else {
            if (array[middle] > searched) {
                last = middle - 1;
            } else {
                first = middle + 1;
            }
        }
    }
    
    return -1;
}
 
void print(int *array, int arraySize)
{
   for (int i = 0; i < arraySize; i++) {
        cout << array[i] << "  ";
   }
   cout << endl << endl;
}
Insercion (int a[], int N)
{int i,j,v;
  for (i=1; i<N; i++)
     {j=i; v=a[j];
       while(j>=1 && a[j-1]>v)
         {a[j]=a[j-1];
           j--;
         }
        a[j]= v;
      }
}
 
int main()
{
    int arraySize;
    int searched;
    cout << "Ingresa el tamanyo del array" << endl;
    cin >> arraySize;
 
    int array[arraySize];
 
    srand(time(NULL));
    for (int i = 0; i < arraySize; i++) {
        array[i] = rand() % 100;
    }
 
    cout << endl;
    cout << "Array al inicio: " << endl;
    print(array, arraySize);
    cout << "Array ordenado: " << endl;
    Insercion(array,arraySize);
    //quicksort(array, 0, arraySize);
    print(array, arraySize);
 
    cout << "Busqueda binaria -> Ingresa el elemento a buscar: ";
    cin >> searched;
    StartCounter();
    binary_search(array, searched, arraySize);
    cout << GetCounter() <<"\n";
}
