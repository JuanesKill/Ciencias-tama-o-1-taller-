#include <cstdlib>
#include <iostream>
#include <time.h>
#include <fstream>
#include <stdio.h>
#include <windows.h>
#include <fstream>

using namespace std;

 template<class T>
 void sumarmatrices(T**matriza,T**matrizb,int n){
 	T**matrizc;
 	for(int i=0;i<n;i++){
 		for(int j=0;j<n;j++){
 			T**matrizc=(**matriza+j)+(**matrizb+j);
 			cout<<**matrizc<<" ";
 			
		 }
		cout<< endl;
		*matriza+i;
		*matrizb+i;
		*matrizc+i;
	 }
 	
 }
 int main(){
 	int n;
 	cout<< "Digite el tamaño de las matrices ";
 	cin>>n;
 	
 	for(int i=0;i<n;i++){
 		for(int j=0;j<n;j++){
 			
 }
}
}
