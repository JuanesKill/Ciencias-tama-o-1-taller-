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
		aux=cabeza;
		if(cabeza!=NULL){
			while(aux->sig){
				aux= aux->sig;
				}
			aux->sig=info;
			info->sig=NULL;
		}else{
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
			if(pos>tam){
				insertar_final(info);
			} 
			else{ for(int i=0;i<pos;i++){
						aux= aux->sig;
						info->sig=aux->sig;
						aux->sig=info;				
					}	
				}	
		}
		tam++;
	}
	template <class T>
	T Lista<T>:: consultar(int pos){
		nodo<T> *aux;
		aux=cabeza;
		if(tam=1){
			return aux->dato;
		}else{
		
		if(pos>tam || pos==0){
			return 0;
			}else{
				int i=0;
				while(aux!=NULL && i<pos){
					aux=aux->sig;
					i++;	
				}
			return aux->dato;
		}
	}
	}	
/*	template <class T>
	T Lista<T>:: eliminar_inicio(){
		cabeza=	
	
	}*/
		
		
		
		
		
	
	


#endif
