#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#include <stdio.h>

using namespace std;

void f(const char * const prts){
	if (prts[0] == '\0'){
		return;
	}
	else{
		f(&prts[1]);
		cout<<prts[0];
	}
}

int main(){
	char *prts = "daniel";
	f(prts);
} 
