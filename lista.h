#ifndef LISTA_H
#define LISTA_H
struct nodo{
	T dato;
	nodo<T> *sig;
}
template <class T>
class Lista{
	nodo<T> *cabeza, *z;
	
	public:
		Lista(){
			cabeza=z=NULL;
			int tam;
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
	void Lista::insertar_inicio(nodo<T> *info){
		info->sig=cabeza;
		cabeza= info;
				
	}
	template <class T>
	void Lista::insertar_final(nodo<T> *info){
		
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
	void Lista:: insertar_pos(nodo<T> *info, int pos){
		nodo<T> *aux;
		aux=cabeza;
		if(cabeza<=1){
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
	}
	template <class T>
	T Lista:: consultar(int pos){
		if(cabeza!=NULL){
			if(pos>tam || pos==0){
				return 0;
				}else{	for(int i=0;i<pos;i++){
							aux= aux->sig;
							info->sig=aux->sig;
							aux->sig=info;	
												
					}
				}
			}else{
				return 0;
			}
	}	
	template <class T>
	T Lista:: eliminar_inicio(){
		cabeza=	
	
	}
		
		
		
		
		
	
	


#endif
