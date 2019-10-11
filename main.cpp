
  
#include <iostream>
#include <conio.h>
using namespace std;


struct Nodo{
	int valor;
	Nodo *anterior, *siguiente;
};
void agregar( int);
void mostrar();
void mostar_atras();
struct Nodo *lista=NULL;

int main(int argc, char** argv) {
	int opcion, add,n;
	while(opcion!=3){
	
	cout<<"\t..::::MENU:::..."<<endl;
	cout<<"\t1.- Ingresar nodos"<<endl;
	cout<<"\t2.- Mostrar los datos ingresados"<<endl;
	cout<<"\t3.- Salir"<<endl;
	cin>>opcion;
	switch (opcion){
        case 1:
        	cout<<"inserte el numero de datos deseados: ";
        	cin>>n;
        	for (int i=1;i<=n;i++){
			
        	cout<<"Digite datos"<<endl;
        	cin>>add;
        	cout<<endl;
        	agregar(add);
        }
			break;
        case 2:
            cout<<"Mostrar los datos ingresados ";
            cout<<endl;
            mostrar();
            cout<<endl;
            mostar_atras();
            cout<<endl;
            break;
        case 3:
        	cout<<"Salir";
        default:
            cout<<"thanks!"<<endl;
            break;
    }
}
	
	 return 0;
}
void agregar(int add)
{
	Nodo *nuevo= new Nodo;
	nuevo->siguiente=NULL;
	nuevo->anterior=NULL;
	nuevo->valor=add;
	if(lista==NULL)lista=nuevo;
	else{
		Nodo *aux=lista;
		while(aux->siguiente!=NULL){
			aux=aux->siguiente;
		}
		aux->siguiente=nuevo;
		nuevo->anterior=aux;
		
	}
	
}
void mostrar(){
	Nodo *aux=lista;
	while(aux!=NULL){
		cout<<aux->valor<<" -> ";
		aux=aux->siguiente;
	}
	cout<<endl;
}
void mostar_atras()
{
		Nodo *aux=lista;
	while(aux->siguiente!=NULL){
		aux=aux->siguiente;	
	}
	while(aux!=NULL){
		cout<<aux->valor<<" -> ";
		aux=aux->anterior;	
	}
	cout<<endl;
}

