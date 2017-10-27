#ifndef colap_h
#define colap_h

using namespace std;

class Cola_Prioridad{
		
	public:		
		Cola_Prioridad();
		~Cola_Prioridad();	
		void insertar(int dato);
		void imprimir();
		int atender();
		int arreglo[100];

};

Cola_Prioridad::Cola_Prioridad(){
	int arreglo[100];
	arreglo[0]=1;
}

Cola_Prioridad::~Cola_Prioridad(){
	int arreglo[100];
	arreglo[0]=1;
}

void Cola_Prioridad::insertar(int dato){
	cout<<"hola";
	if (arreglo[0] == 1){
		arreglo[0]=2;
		arreglo[1]=dato;
	}else{
		int posactivo=arreglo[0];
		int padre =arreglo[0]/2;
		while(padre!=0){
			if(dato>arreglo[padre]){
				arreglo[posactivo]=arreglo[padre];
				arreglo[padre]=dato;
				padre=padre/2;
				posactivo=padre;
			}else{
				arreglo[posactivo]=dato;
				padre=0;	
			}
		}
		arreglo[0]=arreglo[0]+1;
	}
}
int Cola_Prioridad::atender(){
	int aux=0;
	int posactiva=1;
	int posizq=posactiva*2;
	int posder=(posactiva*2)+1;
	aux=arreglo[arreglo[0]-1];
	while(posizq<arreglo[0] || posder<arreglo[0]){
		if(arreglo[posizq]>arreglo[posder]){
			arreglo[posactiva]=arreglo[posizq];
			posactiva=posizq;
			
		}else{
			arreglo[posactiva]=arreglo[posder];
			posactiva=posder;
			
		}
	}
	arreglo[posactiva]=aux;
	arreglo[0]=arreglo[0]-1;
}

#endif
