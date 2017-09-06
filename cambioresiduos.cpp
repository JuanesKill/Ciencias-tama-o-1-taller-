
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#include <stdio.h>

using namespace std;
class clavebits
{ private: int x;
   public: 
        clavebits& operator=(int i)
           {x=i; return *this; }
        inline bits (int a,int k, int j)
            {return (x>>k)&~(~0<<j);}
};

intercambio(int a[], int min, int i){
     int temp=0;
	 temp=a[min];
     a[min]=a[i];
     a[i]=temp;
}

typedef clavebits tipoElemento;

void cambioresiduos(int a[], int izq, int der, int b)
{ int i,j; int t;
   if (der>izq && b>0)
     {i= izq; j=der;
       while(j!=i)
          {while(!bits(a[i],b,1) && i<j)i++;
            while(bits(a[j],b,1) && j>i)j--;
             intercambio(a, i, j);
           }
        if (!bits(a[i],b,1)) j++;
            cambioresiduos(a, izq, j-1, b-1);
            cambioresiduos(a, j, der, b-1);
      }
}


int main()
{
  
}

