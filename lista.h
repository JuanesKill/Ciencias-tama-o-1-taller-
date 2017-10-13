#ifndef LISTA_H
#define LISTA_H
template <class T>
struct nodo{
	T dato;
	nodo<T> *sig;
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
};
	template <class T>
	void Lista<T>::insertar_inicio(nodo<T> *info){
		info->sig=cabeza;
		cabeza=info;
		tam++;				
	}
	template <class T>
	void Lista<T>::insertar_final(nodo<T> *info){
		
		nodo<T> *aux;
		aux=cabeza->sig;
		if(cabeza!=NULL){
			while(aux->sig){
				aux= aux->sig;
				}
			aux->sig=info;
			info->sig=NULL;
		}else{
			info->sig=cabeza;
			cabeza=info;
		}
		tam++;
	}
	template <class T>
	void Lista<T>:: insertar_pos(nodo<T> *info, int pos){
		nodo<T> *aux;
		aux=cabeza;
		if(pos<=1){
			insertar_inicio(info);
		}else{
			if(pos>=tam){
				insertar_final(info);
			} 
			else{ 	for(int i=2;i<pos;i++){
						aux= aux->sig;			
					}
					info->sig=aux->sig;
					aux->sig=info;
					tam++;
				}	
		}
		
	}
	template <class T>
	T Lista<T>:: consultar(int pos){
		nodo<T> *aux;
		aux=cabeza;
		if(pos>tam || pos==0){
			return 0;
			}else{
				int i=1;
				while(aux!=NULL && i<pos){
					aux=aux->sig;
					i++;	
				}
			return aux->dato;
		}
	}
	
	template <class T>
	T Lista<T>:: eliminar_inicio(){
		nodo<T> *aux;
		aux=cabeza;
		cabeza=cabeza->sig;
		aux=NULL;
		tam--;	
		return cabeza->dato;
	
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
			aux->sig=NULL;
		}else{
			return 0;
		}
		tam--;
	}
	template <class T>
	T Lista<T>:: eliminar_pos(int pos){
		nodo<T> *aux;
		nodo<T> *aux2;
		aux=cabeza;
		aux2=cabeza->sig;
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
						i++;
					}
					aux->sig=aux2->sig;
					aux2=NULL;
					tam--;
				}	
		}
	}
#endif
