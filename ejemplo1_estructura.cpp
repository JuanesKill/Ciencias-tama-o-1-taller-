#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#include <stdio.h>

using namespace std;

template<class R, class S>
struct dos{
	R a;
	S b;
};

template<class T, class R, class S>
struct uno{
	T x;
	dos<R,S> y;
};

template<class T, class S, class R>
void imprimirEst(uno<T,R,S> a){
	cout<<" - "<<a.y.a<<" - "<<a.y.b<<endl;
}

int main(){
	uno <int, float, char> a;
//	uno <int, char> *b;
//	uno <float, char> *c;
//	
//	a = new uno<int, float>;
//	b = new uno<int, char>;
//	c = new uno<float, char>;

	a.x = 2;
	a.y.a = 2.51;
	a.y.b = 'o';

//	a->x = 5;
//	a->y = 10.9;
//	
//	b->x = 50;
//	b->y = 'hola';
//	
//	c->x = 2.6;
//	c->y = 'mundo';
//	
	imprimirEst(a);
//	imprimirEst(b);
//	imprimirEst(c);
}
