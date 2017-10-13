#include <iostream>
#include <stdio.h>
#include "lista.h"

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct Estudiante {
	string nombre,carrera,hobbie;
	int edad;
	int sig_nombre,sig_carrera,sig_hobbie,sig_edad;
};

int main() {
	
	Lista <Estudiante> estudiantes;
		
	
	/*for (int i=1; i<=5; i++){
		
		Estudiante nuevo;
		Asignatura asig;
		Nota noti;
		
		Lista <Nota> notas;
		Lista <Asignatura> asignaturas;
		
		cout<<"Nombre, codigo, carrera, edad :"<<endl;
		cin>>nuevo.nombre;
		cin>>nuevo.codigo;
		cin>>nuevo.carrera;
		cin>>nuevo.edad;
		
		for(int j=1; j<=3; j++){
			cout<<"nombre, codigo asignaturas"<<endl;
			cin>>asig.nombre;
			cin>>asig.codigo;
			
			for(int k=1;k<=4;k++){
				cout<<"Ingrese el valor y el porcentaje de la nota:"<<endl;
				cin>>noti.valor;
				cin>>noti.porcentaje;	
				notas.insertar_pos(noti,k);
			}
			
			asig.notas=notas;
			asignaturas.insertar_pos(asig,j);	
		}
		
		nuevo.materias=asignaturas;
		estudiantes.insertar_pos(nuevo,i);
	}*/
		
		Estudiante nuevo;
		nuevo.nombre="Raquel";
		nuevo.carrera="Electrica";
		nuevo.hobbie="Danza";
		nuevo.edad=21;
		estudiantes.insertar_inicio(nuevo);
		
		Estudiante nuevo1;
		nuevo1.nombre="Jaime";
		nuevo1.carrera="Industrial";
		nuevo1.hobbie="Natacion";
		nuevo1.edad=18;
		estudiantes.insertar_pos(nuevo1, 2);
		
		Estudiante nuevo2;
		nuevo2.nombre="Arturo";
		nuevo2.carrera="Basket";
		nuevo2.edad=16;
		estudiantes.insertar_pos(nuevo2, 3);
		
		Estudiante nuevo3;
		nuevo3.nombre="Andres";
		nuevo3.carrera="Catastral";
		nuevo3.hobbie="Danza";
		nuevo3.edad=24;
		estudiantes.insertar_pos(nuevo3, 4);
		
		Estudiante nuevo4;
		nuevo4.nombre="Ariana";
		nuevo4.carrera="Sistemas";
		nuevo4.hobbie="Basket";
		nuevo4.edad=21;
		estudiantes.insertar_pos(nuevo4, 5);
		
		Estudiante nuevo5;
		nuevo5.nombre="Juanny";
		nuevo5.carrera="Industrial";
		nuevo5.hobbie="Natacion";
		nuevo5.edad=17;
		estudiantes.insertar_pos(nuevo5, 6);
		
		Estudiante nuevo6;
		nuevo6.nombre="Mary Paz";
		nuevo6.carrera="Sistemas";
		nuevo6.hobbie="Danza";
		nuevo6.edad=25;
		estudiantes.insertar_pos(nuevo6, 7);
		
		Estudiante nuevo7;
		nuevo7.nombre="Italia";
		nuevo7.carrera="Catastral";
		nuevo7.hobbie="Beisbol";
		nuevo7.edad=22;
		estudiantes.insertar_pos(nuevo7, 8);
		
		Estudiante nuevo8;
		nuevo8.nombre="Mario";
		nuevo8.carrera="Sistemas";
		nuevo8.hobbie="Basket";
		nuevo8.edad=20;
		estudiantes.insertar_pos(nuevo8, 9);
		
		Estudiante nuevo9;
		nuevo9.nombre="Pilar";
		nuevo9.carrera="Sistemas";
		nuevo9.hobbie="Beisbol";
		nuevo9.edad=23;
		estudiantes.insertar_final(nuevo9);
		
		cout<<estudiantes.obtenerDato(5);
		
		/*for(int j=1; j<=3; j++){
			//cout<<"nombre, codigo asignaturas"<<endl;
			asig.nombre="materia"+i;
			asig.codigo=i;
			
			for(int k=1;k<=4;k++){
				//cout<<"Ingrese el valor y el porcentaje de la nota:"<<endl;
				noti.valor=5.0;
				noti.porcentaje=25;	
				notas.insertar_pos(noti,k);
			}
			
			asig.notas=notas;
			asignaturas.insertar_pos(asig,j);	
		}
		
		nuevo.materias=asignaturas;
		estudiantes.insertar_pos(nuevo,i);
	
	cout<<"El tamaño del arreglo estudiantes es: "<<estudiantes.tamano_lista()<<endl;
	
	Estudiante aModEs;
	Nota aModNota;
	Asignatura aModAsig;
	
	aModEs=estudiantes.obtenerDato(3);
	aModAsig=aModEs.materias.obtenerDato(3);
	//Nota 2 de la 3 asignatura del 3 estudiante
	float nuevaInfo;
	float nuevoPorcentaje;
	nuevoPorcentaje=aModAsig.notas.obtenerDato(2).porcentaje;
	aModAsig.notas.eliminar(2);

	cout<<"Ingrese el nuevo valor de la nota"<<endl;
	cin>>nuevaInfo;
	aModNota.porcentaje=nuevoPorcentaje;
	aModNota.valor=nuevaInfo;
	
	aModAsig.notas.insertar_pos(aModNota,2);
	
	estudiantes.eliminar(1);
	
	for (int i=1;i<=4;i++){
		Estudiante iEs=estudiantes.obtenerDato(i);
		cout<<endl<<"Estudiante "<<i<<" Nombre: "<<iEs.nombre<<" Codigo: "<<iEs.codigo<<" Edad: "<<iEs.edad<<" Carrera: "<<iEs.carrera<<endl;
		for(int j=1;j<=3;j++){
			Asignatura iAs=iEs.materias.obtenerDato(j);
			cout<<"La asignatura "<<j<<" Nombre: "<<iAs.nombre<<" Codigo: "<<iAs.codigo<<endl;
			for (int k=1;k<=4;k++){
				Nota iNo=iAs.notas.obtenerDato(k);
				cout<<"la nota "<<k<<" Valor: "<<iNo.valor<<" Porcentaje: "<<iNo.porcentaje<<endl;
			}
		}
	}*/
	
	
		
}
