#include <iostream>
#include <fstream>
#include <string.h>
#include <string>
#include<cstdlib>
#include <ctime> 
#include "nodo.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
nodo *I,*T,*F,*A;
int op;
unsigned t0, t1;
double t=0;
void agregar(int);
void agregar(int,string);
void presentar();
int mayor();
void buscar(int x);
void modificar(int);
void leer();
void guardar();
void borrar();

int main(int argc, char** argv) {
	int x;
	string y;
	do{
		cout<<"Menu"<<endl;
		cout<<"1) Agregar"<<endl;
		cout<<"2) Presentar"<<endl;
		cout<<"3) Mayor"<<endl;
		cout<<"4) Buscar"<<endl;
		cout<<"5) Modificar"<<endl;
		cout<<"6) Leer"<<endl;
		cout<<"7) Guardar"<<endl;
		cout<<"8) Borrar"<<endl;
		cout<<"0) Salir"<<endl;
		cin>>op;
		
		switch(op){
			case 1:
				cout<<"Ingrese un nuevo numero"<<endl;
				cin>>x;
				cout<<"Ingrese un nombre"<<endl;
				cin>>y;
				agregar(x,y);
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
			case 6:
				t0=clock();
				leer();
				t1 = clock();
 
				 t = (double(t1-t0)/CLOCKS_PER_SEC);
				cout << "Execution Time: " << t << endl;
				break;
			case 7:
				guardar();
				break;
			case 8:
				borrar();
				break;
			case 0:
				break;
			default:
				cout<<"Opcion no valida"<<endl;
		}
	}while(op!=0);
	
	return 0;
}
void ordenar(){
	int id_t;
	string nombre;
	
	
}
void borrar(){
	int x;
	cout<<"Ingrese el ID a Eliminar"	<<endl;
	cin>>x;
	buscar(x);
	if(T!=NULL){
		if(T==I){
			I=I->sig;
			T=I;
		}else if(T==F){
			A->sig=NULL;
			F=A;
			T=A;
		}else{
			A->sig=T->sig;
			T->sig=NULL;
			
			
		}
	}
}
void guardar(){
	ofstream archivo;
	//archivo.open("C:\\textos\\motagua.txt",std::ofstream::app);
	archivo.open("C:\\textos\\motagua.txt");
	T=I;
	
	while(T!=NULL){
	
		archivo<<T->id<<"\n";		
		archivo<<T->nombre<<"\n";
		T=T->sig;
	}
	archivo.close();
}

void leer(){
	ifstream fe("C:\\textos\\motagua.txt");
	char id[128];
	char nombre[128];
	while(!fe.eof()){
		fe>>id;
		fe>>nombre;
		if(!fe.eof()){		
			agregar(atoi(id),nombre);
		}
		
	}
	cout<<"Leido"<<endl;
	fe.close();
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
void agregar(int x,string z){
	T=new nodo();
	T->id=x;
	T->nombre=z;
	
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
	A=T;
	while(T!=NULL && !search){
		if((T->id) == x ){
			search = true;
			cout<<"Id:"<<T->id<<endl;
			cout<<"Nombre: "<<T->nombre<<endl;
			cout<<"Se encontro el registro";
			//T=T->sig;
		}
		else{
			A=T;
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
		cout<<"Nombre:"<<T->nombre<<endl;
		T=T->sig;
	}
}
