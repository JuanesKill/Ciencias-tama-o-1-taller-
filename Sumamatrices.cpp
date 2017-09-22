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
//_________________________________________________________________________________________

#include <cstdlib>
#include <iostream>
#include <time.h>
#include <fstream>
#include <stdio.h>
#include <windows.h>
#include <fstream>

using namespace std;

template<class T>
void Sumar(T **a, T **b, int n){
	T **matrizc;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<a[i][j] + b[i][j]<<"	";
		}
		cout<< endl;
//		*matriza+i;
//		*matrizb+i;
//		*matrizc+i;
	}
}
int main(){
	int n;
	cout<< "Digite el tamaño de las matrices nxn: ";
	cin>>n;
//	char a[n][n], b[n][n];
	int **a[n][n], **b[n][n];
//	srand(time(NULL));
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			//a[i][j] = 97 + rand() % (122 - 97);
			cout<<"Digite el numero en la posicion ["<<i+1<<"] ["<<j+1<<"] de la primera matriz: ";
			cin>>**a[i][j];
		}
	}
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			//a[i][j] = 97 + rand() % (122 - 97);
			cout<<"Digite el numero en la posicion ["<<i+1<<"] ["<<j+1<<"] de la primera matriz: ";
			cin>>**b[i][j];
		}
	}
	Sumar(**a, **b, n);
}
