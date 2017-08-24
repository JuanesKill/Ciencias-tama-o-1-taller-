#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

intercambio(int a[], int min, int i){
     int temp=0;
	 temp=a[min];
     a[min]=a[i];
     a[i]=temp;
}

Seleccion (int a[], int N)
{int i,j,min;
   for (i=0;i<N; i++)
       {min = i;
         for (j=i+1;j<N; j++){
	 		if(a[j]<a[min]) {
			 	min = j;
			 }
         	intercambio(a, min, i);
        }
    cout<<a[i];    
}
}
burbuja (int a[], int N)
{int i,j;
  for (i=N; i>0; i--){
     for(j=1; j<i; j++){
           if(a[j-1]> a[j]){
        		intercambio(a,j-1,j);
        	}
       }
       
}
for(i=0;i<N;i++){
	cout<<a[i];
}
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
for(i=0;i<N;i++){
	cout<<a[i];
}
}





int main (int argc, char** argv){
	int a[5]={6,5,4,3,2};
	//Seleccion(a,5);
	//burbuja(a,5);
	Insercion(a,5);
}


