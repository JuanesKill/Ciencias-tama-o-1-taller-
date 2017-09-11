#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#include <stdio.h>

using namespace std;

calcular(int a, int b){
	if (b == 0){
		return a;
	}
	else{
		return calcular(b, a%b);
	}
}

int main(){
	int a, b;
	cin>>a;
	cin>>b;
	cout<<endl<<calcular(a, b);
}
