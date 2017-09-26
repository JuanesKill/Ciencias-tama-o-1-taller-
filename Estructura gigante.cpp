#include <cstdlib>
#include <iostream>
#include <time.h>
#include <fstream>
#include <stdio.h>
#include <windows.h>
#include <fstream>
 
using namespace std;

template<class T, class S>
struct uno{
	T x;
	S y;
};
template<class W,class T ,class S>
struct WU{
	W **w;
	uno<T,S> U;
};

template<class T1, class T,class S>
struct P{
	T1 t1;
	uno<T,S> u1;
};
template<class T,class S,class F>
struct L{
	uno<T,S> n;
	F *f;
};
template<class TL,class SL,class FL,class T1, class TH, class SH>
struct O{
	L<TL,SL,FL> l;
	P<T1,TH,SH> h;
};
template<class TP, class T,class S,class TL,class SL,class FL,class T1, class TH, class SH>
struct R{
	P<TP,T,S> p;
	O<TL,SL,FL,T1,TH,SH> o;
};
template<class T,class S,class E>
	struct G{
	uno<T,S> *f1;
	E *e ;
};
template<class T,class S,class TV,class SV>
	struct C{
	uno<T,S> *z;
	uno<TV,SV> v;
};
template<class T, class S,class B,class TZ,class SZ,class TV,class SV>
	struct D{
	uno<T,S> a;
	B b;
	C<TZ,SZ,TV,SV> c;
};
template<class TG,class SG,class E, class T, class S,class B,class TZ,class SZ,class TV,class SV>
	struct Q{
	G<TG,SG,E> g;
	D<T,S,B,TZ,SZ,TV,SV> d;
};
template<class W,class T ,class S,class TP, class TR,class SR,class TL,class SL,class FL,class T1, class TH, class SH, class TG,class SG,class E, class TQ, class SQ,class B,class TZ,class SZ,class TV,class SV>
	struct estr{
	WU<W,T,S> s;
	R<TP,TR,SR,TL,SL,FL,T1,TH,SH> r;
	Q<TG,SG,E,TQ,SQ,B,TZ,SZ,TV,SV>	q;
};
template<class W,class T ,class S,class TP, class TR,class SR,class TL,class SL,class FL,class T1, class TH, class SH, class TG,class SG,class E, class TQ, class SQ,class B,class TZ,class SZ,class TV,class SV>
void imprimirEst(estr<W,T,S,TP,TR,SR,TL,SL,FL,T1,TH,SH,TG,SG,E,TQ,SQ,B,TZ,SZ,TV,SV> estruc){
	//estruc.s.w
	//estruc.r.o.l.f
	//estruc.q.g.e
	cout<<estruc.s.U.x<< " - "<<estruc.s.U.y<< " - "<<estruc.r.p.t1<< " - "<<estruc.r.p.u1.x<< " - "<<estruc.r.p.u1.y<< " - "<<estruc.r.o.l.n.x<< " - "<<estruc.r.o.l.n.y<< " - "<<estruc.r.o.h.t1<< " - "<<estruc.r.o.h.u1.x<< " - "<<estruc.r.o.h.u1.y<< " - "<<estruc.q.g.f1->x<< " - "<<estruc.q.g.f1->y<< " - "<<estruc.q.d.a.x<< " - "<<estruc.q.d.a.y<< " - "<<estruc.q.d.b<< " - "<<estruc.q.d.c.z->x<< " - "<<estruc.q.d.c.z->y<< " - "<<estruc.q.d.c.v.x<< " - "<<estruc.q.d.c.v.y<<endl;
}

int main(){
	estr<int,int,char,float,int,char,float,int,int,char,char,float,int,int,int,float,float,char,float,char,char,char> estruc;
	//estruc.s.w=3;
	estruc.s.U.x=6;
	estruc.s.U.y='r';
	estruc.r.p.t1=7.5;
	estruc.r.p.u1.x=21;
	estruc.r.p.u1.y='t';
	estruc.r.o.l.n.x=9.2;
	estruc.r.o.l.n.y=36;
	//estruc.r.o.l.f=2;
	estruc.r.o.h.t1='m';
	estruc.r.o.h.u1.x='e';
	estruc.r.o.h.u1.y=11.1;
	estruc.q.g.f1->x=99;
	estruc.q.g.f1->y=59;
	//estruc.q.g.e=2;
	estruc.q.d.a.x=4.5;
	estruc.q.d.a.y=2.2;
	estruc.q.d.b='q';
	estruc.q.d.c.z->x=2.9;
	estruc.q.d.c.z->y='z';
	estruc.q.d.c.v.x='f';
	estruc.q.d.c.v.y='n';
	
	imprimirEst(estruc);
}
