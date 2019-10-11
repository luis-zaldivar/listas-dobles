
  
#include <iostream>
#include <conio.h>
using namespace std;


struct Nodo{
	int valor;
	Nodo *anterior, *siguiente;
};
void agregar( int);
void mostrar();
struct Nodo *lista=NULL;

int main(int argc, char** argv) {
	int opcion, add;
	while(opcion!=3){
	
	cout<<"\t..::::MENU:::..."<<endl;
	cout<<"\t1.- Ingresar nodos"<<endl;
	cout<<"\t2.- Mostrar los datos ingresados"<<endl;
	cout<<"\t3.- Salir"<<endl;
	cin>>opcion;
	switch (opcion){
        case 1:
        	cout<<"Digite datos"<<endl;
        	cin>>add;
        	cout<<endl;
        	agregar(add);
        	
			break;
        case 2:
            cout<<"Mostrar los datos ingresados ";
            cout<<endl;
            mostrar();
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
		cout<<aux->valor<<"  \n";
		aux=aux->siguiente;
	}
	cout<<endl;
}
