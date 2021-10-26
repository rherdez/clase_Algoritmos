#include <iostream>
#include "nodo.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
nodo *I,*T,*F;
int op;

void agregar(int);
void presentar();
int mayor();
void buscar(int x);
void modificar(int);

int main(int argc, char** argv) {
	int x;
	do{
		cout<<"Menu"<<endl;
		cout<<"1) Agregar"<<endl;
		cout<<"2) Presentar"<<endl;
		cout<<"3) Mayor"<<endl;
		cout<<"4) Buscar"<<endl;
		cout<<"5) Modificar"<<endl;
		cout<<"0) Salir"<<endl;
		cin>>op;
		
		switch(op){
			case 1:
				cout<<"Ingrese un nuevo numero"<<endl;
				cin>>x;
				agregar(x);
				break;
			case 2:
				presentar();
				break;
			case 3:
				cout<<"El mayor es: "<<mayor()<<endl;
				break;
			case 4:
				cout<<"Ingrese el numero a buscar"<<endl;
				cin>>x;
				buscar(x);
				break;
			case 5:
				cout<<"Ingrese el numero a buscar"<<endl;
				cin>>x;
				modificar(x);
				break;
			case 0:
				break;
			default:
				cout<<"Opcion no valida"<<endl;
		}
	}while(op!=0);
	
	return 0;
}

void modificar(int x){
	buscar(x);
	if(T!=NULL){
		cout<<"Ingrese el nuevo valor"<<endl;
		cin>>T->id;
	}
}

void agregar(int x){
	T=new nodo();
	T->id=x;
	T->sig=NULL;
	
	if(I==NULL){
		I=T;
	}
	else{
		F->sig=T;	
	}
	
	F=T;		
}

int mayor(){	
		T = I;
		int max;
		max = T->id;	
	while(T!=NULL){
	
		if(T->id>max){
			max = T->id;
		}
		T=T->sig;	
	}
	//cout<<" El registro mayor es: "<<max<<endl;
return max;
}

void buscar(int x){
	bool search = false;
		//int n; 
		//n=x
	T=I;
	while(T!=NULL && !search){
		if((T->id) == x ){
			search = true;
			cout<<"Se encontro el registro";
			//T=T->sig;
		}
		else{
			T=T->sig;
		}
	}
			if(!search){
				cout<<"No se encontro el registro"<<endl;
			}
}
void presentar(){
	T=I;
	while(T!=NULL){
		cout<<"Id: "<<T->id<<endl;
		T=T->sig;
	}
}
