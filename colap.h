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
		cout<<"hola";
	}else{
		int posactivo=arreglo[0];
		int padre =arreglo[0]/2;
		while(padre!=0){
			if(dato>arreglo[padre]){
				arreglo[posactivo]=arreglo[padre];
				arreglo[padre]=dato;
				padre=padre/2;
				posactivo=padre;
				cout<<"hola";
			}else{
				arreglo[posactivo]=dato;
				padre=0;	
			}
		}
		arreglo[0]=arreglo[0]+1;
	}
}




#endif

