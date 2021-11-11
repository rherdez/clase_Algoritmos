#include "listadoble.h"
using namespace std;
listadoble::listadoble()
{
	I=NULL;
	F=NULL;
	T=NULL;
}
void listadoble::agregar(int x){
	T=new nodo_c();
	T->id=x;
	T->sig=NULL;
	T->ant=NULL;

	if(I==NULL){
		I=T;		
	}
	else{
		F->sig=T;
		T->ant=F;
	}
	F=T;
	
}

void listadoble::pi(){
	T=I;
	while(T!=NULL){
		cout<<"ID: "<<T->id<<endl;
		T=T->sig;
	}
}

void listadoble::pf(){
	T=F;
	while(T!=NULL){
		cout<<"ID: "<<T->id<<endl;
		T=T->ant;
	}
}

void listadoble::buscar(int x){
	bool encontrado=false;
	if(x<=(F->id/2)){
		T=I;
			while(T!=NULL && !encontrado){
					if(x==T->id){
						cout<<"ID encontrado"<<endl;
						encontrado=true;
						
					}
					else{
						cout<<"ID: "<<T->id<<endl;
					T=T->sig;
					}
					
			}					
	}
	else
	{
		T=F;
			while(T!=NULL && !encontrado){
				if(x==T->id){
						cout<<"ID encontrado"<<endl;
						encontrado=true;						
					}
					else{
						cout<<"ID: "<<T->id<<endl;
						T=T->ant;
					}
			}
		
	}
	
	if(!encontrado){
		cout<<"El registro no fue encontrado"<<endl;
	}
}
