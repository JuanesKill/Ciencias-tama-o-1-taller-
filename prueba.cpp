#include <iostream>
#include <cstdlib>

using namespace std;

	
	struct Nodo {
		string nombre;
		int edad;
		string carrera;
		string hobby;
		int sig_nombre;
		int sig_edad;
		int sig_carrera;
		int sig_hobby;
	};

	int tam;
	int arreglo_cabezas[10];
	Nodo arreglo_datos[10];
	int  pos;
	
	bool lista_vacia(){
    	if (tam == 0){
        	return true;
    	}
    	return false; 
	}
	
	void enlazar_ascendente (string nombre, int pos){
		string aux;
		int auxPos;
		int auxPosAnt;
		aux=arreglo_datos[arreglo_cabezas[0]].nombre;
		auxPos=arreglo_cabezas[0];
		if(nombre<aux){
			arreglo_datos[pos].sig_nombre=arreglo_cabezas[0];
			arreglo_cabezas[0]=pos;
		}
		else{
			while(arreglo_datos[auxPos].sig_nombre!=-1 && nombre>aux){
				auxPosAnt=auxPos;
				auxPos =arreglo_datos[auxPos].sig_nombre;
				aux= arreglo_datos[auxPos].nombre;
			}
			if(nombre>aux){
				arreglo_datos[auxPos].sig_nombre=pos;
			}
			else{
				arreglo_datos[pos].sig_nombre= auxPos;
				arreglo_datos[auxPosAnt].sig_nombre=pos;
			}
		}
	}
	
	void enlazar_descendente (int edad, int pos){
		int aux;
		int auxPos;
		int auxPosAnt;
		aux=arreglo_datos[arreglo_cabezas[1]].edad;
		auxPos=arreglo_cabezas[1];
		if(edad>aux){
			arreglo_datos[pos].sig_edad=arreglo_cabezas[1];
			arreglo_cabezas[1]=pos;
		}
		else{
			while(arreglo_datos[auxPos].sig_edad!=-1 && edad<aux){
				auxPosAnt=auxPos;
				auxPos=arreglo_datos[auxPos].sig_edad;
				aux=arreglo_datos[auxPos].edad;
			}
			if(edad<aux){
				arreglo_datos[auxPos].sig_edad=pos;
			}
			else{
				arreglo_datos[pos].sig_edad= auxPos;
				arreglo_datos[auxPosAnt].sig_edad=pos;
			}
		}
	}
	
	void enlazar_final(string carrera, int pos){
		int auxPos;
		if(carrera=="Sistemas"){
			auxPos=arreglo_cabezas[2];
			if(auxPos == -1){
				arreglo_cabezas[2]=pos;
			}
			else{
				while(arreglo_datos[auxPos].sig_carrera != -1){
					auxPos=arreglo_datos[auxPos].sig_carrera;
				}
				arreglo_datos[auxPos].sig_carrera=pos;
			}
		}
		else{
			if(carrera=="Electrica"){
				auxPos=arreglo_cabezas[3];
				if(auxPos == -1){
					arreglo_cabezas[3]=pos;
				}
				else{
					while(arreglo_datos[auxPos].sig_carrera != -1){
						auxPos=arreglo_datos[auxPos].sig_carrera;
					}
					arreglo_datos[auxPos].sig_carrera=pos;
				}
			}
			else{
				if(carrera=="Industrial"){
					auxPos=arreglo_cabezas[4];
					if(auxPos == -1){
						arreglo_cabezas[4]=pos;
					}
					else{
						while(arreglo_datos[auxPos].sig_carrera != -1){
							auxPos=arreglo_datos[auxPos].sig_carrera;
						}
						arreglo_datos[auxPos].sig_carrera=pos;
					}
				}
				else{
					if(carrera=="Catastral"){
						auxPos=arreglo_cabezas[5];
						if(auxPos == -1){
							arreglo_cabezas[5]=pos;
						}
						else{
							while(arreglo_datos[auxPos].sig_carrera != -1){
								auxPos=arreglo_datos[auxPos].sig_carrera;
							}
							arreglo_datos[auxPos].sig_carrera=pos;
						}
					}
					else{
						auxPos=arreglo_cabezas[6];
						if(auxPos == -1){
							arreglo_cabezas[6]=pos;
						}
						else{
							while(arreglo_datos[auxPos].sig_carrera != -1){
								auxPos=arreglo_datos[auxPos].sig_carrera;
							}
							arreglo_datos[auxPos].sig_carrera=pos;
						}
					}
				}
			}
		}			
	}

	void enlazar_inicio(string hobby, int pos){
		int auxPos;
		if(hobby=="danza"){
			auxPos=arreglo_cabezas[7];
			if(auxPos == -1){
				arreglo_cabezas[7]=pos;
			}
			else{
				arreglo_datos[pos].sig_hobby = auxPos;
				arreglo_cabezas[7]=pos;
			}
		}
		else{
			if(hobby=="basket"){
				auxPos=arreglo_cabezas[8];
				if(auxPos == -1){
					arreglo_cabezas[8]=pos;
				}
				else{
					arreglo_datos[pos].sig_hobby = auxPos;
					arreglo_cabezas[8]=pos;
				}
			}
			else{
				if(hobby=="natacion"){
					auxPos=arreglo_cabezas[9];
					if(auxPos == -1){
						arreglo_cabezas[9]=pos;
					}
					else{
						arreglo_datos[pos].sig_hobby = auxPos;
						arreglo_cabezas[9]=pos;
					}
				}
				else{
					if(hobby=="beisbol"){
						auxPos=arreglo_cabezas[10];
						if(auxPos == -1){
							arreglo_cabezas[10]=pos;
						}
						else{
							arreglo_datos[pos].sig_hobby = auxPos;
							arreglo_cabezas[10]=pos;
						}
					}
					else{
						auxPos=arreglo_cabezas[11];
						if(auxPos == -1){
							arreglo_cabezas[11]=pos;
						}
						else{
							arreglo_datos[pos].sig_hobby = auxPos;
							arreglo_cabezas[11]=pos;
						}
					}
				}
			}
		}
	}
	
		void insertar(string nombre, int edad, string carrera, string hobby){
		if(tam<10){	
			Nodo nuevo;
			nuevo.nombre=nombre;
			nuevo.edad=edad;
			nuevo.carrera=carrera;
			nuevo.hobby=hobby;
			nuevo.sig_nombre=-1;
			nuevo.sig_edad=-1;
			nuevo.sig_carrera=-1;
			nuevo.sig_hobby=-1;
			arreglo_datos[tam]=nuevo;
			if(tam!=0){
				enlazar_ascendente(nombre,tam);
				enlazar_descendente(edad,tam);
				enlazar_final(carrera, tam);
				enlazar_inicio(hobby, tam);
			}
			else{
				if(carrera=="Sistemas"){
					arreglo_cabezas[2]=0;
				}
				else{
					if(carrera=="Electrica"){
						arreglo_cabezas[3]=0;
					}
					else{
						if(carrera=="Industrial"){
							arreglo_cabezas[4]=0;
						}
						else{
							if(carrera=="Catastral"){
								arreglo_cabezas[5]=0;
							}
							else{
								arreglo_cabezas[6]=0;
							}
						}
					}
				}
			}
			tam++;
		}
		else{
			cout<<"Esta lleno"<<endl;
		}
	}
	
	
	void imprimir_nombre (){
		if(lista_vacia()){
			cout<<"la lista de nombres no tiene informacion"<<endl;
		}
		else{
			cout<<"la informacion de la lista de nombres es: "<<endl;
			pos=arreglo_cabezas[0];
			while(arreglo_datos[pos].sig_nombre !=-1){
				cout<<"Nombre : "<< arreglo_datos[pos].nombre<<endl;
				pos=arreglo_datos[pos].sig_nombre;
			}
			cout<<"Nombre : "<< arreglo_datos[pos].nombre<<endl;
		}
	}
	
	void imprimir_nombre_edad (){
		if(lista_vacia()){
			cout<<"la lista edades no tiene informacion"<<endl;
		}
		else{
			cout<<"la informacion de la lista de edades es: "<<endl;
			pos=arreglo_cabezas[1];
			while(arreglo_datos[pos].sig_edad !=-1){
				cout<<"Nombre : "<< arreglo_datos[pos].nombre<<endl;
				cout<<"Edad : "<< arreglo_datos[pos].edad<<endl;
				pos=arreglo_datos[pos].sig_edad;
			}
			cout<<"Nombre : "<< arreglo_datos[pos].nombre<<endl;
			cout<<"Edad : "<< arreglo_datos[pos].edad<<endl;
		}
	}
	
	void imprimir_carrera(string carrera){
		if(lista_vacia()){
			cout<<"la lista de carreras no tiene informacion"<<endl;
		}
		else{
			cout<<"la informacion de la lista de carreras es: "<<endl;
			
			if(carrera=="Sistemas"){
				pos=arreglo_cabezas[2];
				while(arreglo_datos[pos].sig_carrera !=-1){
					cout<<"Nombre : "<< arreglo_datos[pos].nombre<<endl;
					cout<<"Carrera : "<< arreglo_datos[pos].carrera<<endl;
					pos=arreglo_datos[pos].sig_carrera;
				}
				cout<<"Nombre : "<< arreglo_datos[pos].nombre<<endl;
				cout<<"Carrera : "<< arreglo_datos[pos].carrera<<endl;
			}
			else{
				if(carrera=="Electrica"){
					pos=arreglo_cabezas[3];
					while(arreglo_datos[pos].sig_carrera !=-1){
						cout<<"Nombre : "<< arreglo_datos[pos].nombre<<endl;
						cout<<"Carrera : "<< arreglo_datos[pos].carrera<<endl;
						pos=arreglo_datos[pos].sig_carrera;
					}
					cout<<"Nombre : "<< arreglo_datos[pos].nombre<<endl;
					cout<<"Carrera : "<< arreglo_datos[pos].carrera<<endl;
				}
				else{
					if(carrera=="Industrial"){
						pos=arreglo_cabezas[4];
						while(arreglo_datos[pos].sig_carrera !=-1){
							cout<<"Nombre : "<< arreglo_datos[pos].nombre<<endl;
							cout<<"Carrera : "<< arreglo_datos[pos].carrera<<endl;
							pos=arreglo_datos[pos].sig_carrera;
						}
						cout<<"Nombre : "<< arreglo_datos[pos].nombre<<endl;
						cout<<"Carrera : "<< arreglo_datos[pos].carrera<<endl;
					}
					else{
						if(carrera=="Catastral"){
							pos=arreglo_cabezas[5];
							while(arreglo_datos[pos].sig_carrera !=-1){
								cout<<"Nombre : "<< arreglo_datos[pos].nombre<<endl;
								cout<<"Carrera : "<< arreglo_datos[pos].carrera<<endl;
								pos=arreglo_datos[pos].sig_carrera;
							}
							cout<<"Nombre : "<< arreglo_datos[pos].nombre<<endl;
							cout<<"Carrera : "<< arreglo_datos[pos].carrera<<endl;
						}
						else{
							pos=arreglo_cabezas[6];
							while(arreglo_datos[pos].sig_carrera !=-1){
								cout<<"Nombre : "<< arreglo_datos[pos].nombre<<endl;
								cout<<"Carrera : "<< arreglo_datos[pos].carrera<<endl;
								pos=arreglo_datos[pos].sig_carrera;
							}		
							cout<<"Nombre : "<< arreglo_datos[pos].nombre<<endl;
				    		cout<<"Carrera : "<< arreglo_datos[pos].carrera<<endl;
						}
					}
				}
			}
		}
	}
	
	void imprimir_hobby(string hobby){
		if(lista_vacia()){
			cout<<"la lista de hobbys no tiene informacion"<<endl;
		}
		else{
			cout<<"la informacion de la lista de hobbys es: "<<endl;
			
			if(hobby=="danza"){
				pos=arreglo_cabezas[7];
				while(arreglo_datos[pos].sig_hobby !=-1){
					cout<<"Nombre : "<< arreglo_datos[pos].nombre<<endl;
					cout<<"Hobby : "<< arreglo_datos[pos].hobby<<endl;
					pos=arreglo_datos[pos].sig_hobby;
				}
				cout<<"Nombre : "<< arreglo_datos[pos].nombre<<endl;
				cout<<"Hobby : "<< arreglo_datos[pos].hobby<<endl;
			}
			else{
				if(hobby=="basket"){
					pos=arreglo_cabezas[8];
					while(arreglo_datos[pos].sig_hobby !=-1){
						cout<<"Nombre : "<< arreglo_datos[pos].nombre<<endl;
						cout<<"Hobby : "<< arreglo_datos[pos].hobby<<endl;
						pos=arreglo_datos[pos].sig_hobby;
					}
					cout<<"Nombre : "<< arreglo_datos[pos].nombre<<endl;
					cout<<"Hobby : "<< arreglo_datos[pos].hobby<<endl;
				}
				else{
					if(hobby=="natacion"){
						pos=arreglo_cabezas[9];
						while(arreglo_datos[pos].sig_hobby !=-1){
							cout<<"Nombre : "<< arreglo_datos[pos].nombre<<endl;
							cout<<"Hobby : "<< arreglo_datos[pos].hobby<<endl;
							pos=arreglo_datos[pos].sig_hobby;
						}
						cout<<"Nombre : "<< arreglo_datos[pos].nombre<<endl;
						cout<<"Hobby : "<< arreglo_datos[pos].hobby<<endl;
					}
					else{
						if(hobby=="beisbol"){
							pos=arreglo_cabezas[10];
							while(arreglo_datos[pos].sig_hobby !=-1){
								cout<<"Nombre : "<< arreglo_datos[pos].nombre<<endl;
								cout<<"Hobby : "<< arreglo_datos[pos].hobby<<endl;
								pos=arreglo_datos[pos].sig_hobby;
							}
							cout<<"Nombre : "<< arreglo_datos[pos].nombre<<endl;
							cout<<"Hobby : "<< arreglo_datos[pos].hobby<<endl;
						}
						else{
							pos=arreglo_cabezas[11];
							while(arreglo_datos[pos].sig_hobby !=-1){
								cout<<"Nombre : "<< arreglo_datos[pos].nombre<<endl;
								cout<<"Hobby : "<< arreglo_datos[pos].hobby<<endl;
								pos=arreglo_datos[pos].sig_hobby;
							}
							cout<<"Nombre : "<< arreglo_datos[pos].nombre<<endl;
							cout<<"Hobby : "<< arreglo_datos[pos].hobby<<endl;
						}	
					}
				}
			}
		}
	}
	
	void imprimir_cabezas(){
		for(int i=0; i<10; i++){
			cout<<arreglo_cabezas[i]<<" , ";
		}
	}
	
	main(){
		
		for(int i=0; i<10; i++){
				if(i>1 && i<6){
					arreglo_cabezas[i]=-1;
				}else{
					arreglo_cabezas[i]=0;
				}
			}
		
		insertar("Raquel",21,"Electrica","danza");
		insertar("Jaime",18,"Industrial","natacion");
		insertar("Arturo",16,"Electrica","basket");
		insertar("Andres",24,"Catastral","danza");
		insertar("Ariana",19,"Sistemas","basket");
		insertar("Juanny",17,"Industrial","natacion");
		insertar("Mary Paz",25,"Sistemas","danza");
		insertar("Italia",22,"Catastral","beisbol");
		insertar("Mario",20,"Sistemas","basket");
		insertar("Pilar",23,"Sistemas","beisbol");
		
		imprimir_nombre();
		cout<<endl;
		imprimir_nombre_edad();
		cout<<endl;
		imprimir_hobby("natacion");
		cout<<endl;
		imprimir_carrera("Sistemas");
		cout<<endl;
		imprimir_cabezas();
}
