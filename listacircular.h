#ifndef LISTACIRCULAR_H
#define LISTACIRCULAR_H

//----------------------------------
//---------- EJECUTAR EL MAIN ------
//----------------------------------
template <class T>
struct nodo{
	T dato;
	nodo<T> *sig;
	nodo<T> *ant;
};
template <class T>
class Lista{
	nodo<T> *cabeza, *z;
	int tam;
	public:
		Lista(){
			cabeza=z=NULL;
			tam=0;
		}
		void insertar_inicio(nodo<T> *info);
		void insertar_final(nodo<T> *info);
		void insertar_pos(nodo<T> *info, int pos);
		T consultar(int pos);
		T eliminar_inicio();
		T eliminar_final();
		T eliminar_pos(int pos);
		T tamano_lista();
		T lista_vacia();
};
	template <class T>
	void Lista<T>::insertar_inicio(nodo<T> *info){
		
		if(cabeza==NULL){
			info->sig=cabeza;
			info->ant=cabeza;
			cabeza=info;
			z=cabeza;
		}else{
			info->sig=cabeza;
			cabeza->ant= info;
			info->ant=z;
			z->sig= info;
			cabeza=info;
		}
		tam++;				
	}
	template <class T>
	void Lista<T>::insertar_final(nodo<T> *info){
		if(cabeza!=NULL){
			z->sig=info;
			info->ant=z;
			info->sig=cabeza;
			cabeza->ant=info;
			tam++;
		}else{
			insertar_inicio(info);
		}
	}
	template <class T>
	void Lista<T>:: insertar_pos(nodo<T> *info, int pos){
		nodo<T> *aux;
		aux=cabeza;
		if(pos<=1){
			insertar_inicio(info);
		}else{
			if(pos>tam){
				insertar_final(info);
			} 
			else{ 	for(int i=2;i<pos;i++){
						aux= aux->sig;			
					}
					info->sig=aux->sig;
					aux->sig=info;
					info->ant= aux;
					info->sig->ant=info;
					tam++;
				}	
		}
		
	}
	template <class T>
	T Lista<T>:: consultar(int pos){
		nodo<T> *aux;
		aux=cabeza;
		if(pos>tam || pos==0 || aux==NULL){
			return 0;
			}else{
				int i=1;
				while(i<pos){
					aux=aux->sig;
					i++;	
				}
			return aux->dato;
		}
	}
	template <class T>
	T Lista<T>:: tamano_lista(){
		return tam;
	}
		
//	template <class T>
//	T Lista<T>:: eliminar_inicio(){
//		nodo<T> *aux;
//		aux=cabeza;
//		if(cabeza!=NULL && tam>1){
//			cabeza=cabeza->sig;
//			cabeza->ant=z;
//			z->sig=cabeza;
//			aux=NULL;
//		}else{
//			return 0;
//		}
//		tam--;	
//	
//	}
	template <class T>
	T Lista<T>:: eliminar_inicio(){
		nodo<T> *aux;
		if(cabeza!=NULL && tam>1){
			aux=cabeza->sig;
			aux->ant=z;
			z->sig=aux;
			cabeza=NULL;
			cabeza=aux;
		}else{
			return 0;
		}
		tam--;	
	
	}
	
	template <class T>
	T Lista <T>:: eliminar_final(){
		nodo<T> *aux;
		aux=cabeza;
		if(cabeza!=NULL){
			int i=2;
			while(i<tam){
				aux= aux->sig;
				i++;
				}
			cabeza->ant=aux;
			aux->sig=cabeza;	
			z=NULL;
			z=aux;
		}else{
			return 0;
		}
		tam--;
	}
	
	template <class T>
	T Lista<T>:: eliminar_pos(int pos){
		nodo<T> *aux;
		nodo<T> *aux2;
		nodo<T> *aux3;
		aux=cabeza;
		aux2=cabeza->sig;
		aux3=aux2->sig;
		if(pos<=1){
			eliminar_inicio();
		}else{
			if(pos>=tam){
				eliminar_final();
			} 
			else{ 	int i=2;
					while(i<pos){
						aux= aux->sig;
						aux2= aux2->sig;
						aux3=aux3->sig;
						i++;
					}
					aux->sig=aux2->sig;
					aux3->ant=aux2->ant;
					aux2=NULL;
					tam--;
				}	
		}
	}
	template<class T>
	T Lista<T>:: lista_vacia(){
		int i=0;
		while(i<tam+1){
			eliminar_final();
			i++;
			}
		tam=0;
	}
	
#endif
