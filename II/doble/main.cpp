#include <iostream>
#include "supernodo.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

supernodo doble[5];

int op,x;
int main(int argc, char** argv) {
	
	do{
		cout<<"Menu"<<endl;
		cout<<"1) Agregar"<<endl;
		cout<<"2) Presentar Inicio"<<endl;
		cout<<"3) Presentar Final"<<endl;
		cout<<"4) Buscar"<<endl;
		cout<<"0) Salir"<<endl;
		cin>>op;
		
		switch(op){
			case 1:					
				doble[0].abajo.I=NULL;
				doble[0].abajo.F=NULL;
				doble[0].arriba.I=NULL;
				doble[0].arriba.F=NULL;
				for(int i=1;i<10;i++){
						doble[0].arriba.agregar(i);
				}
				for(int i=1;i<10;i++){
						doble[0].abajo.agregar(i*10);
				}
				break;
			case 2:
				doble[0].arriba.pi();
				break;
			case 3:
				doble[0].abajo.pf();
				break;
			case 4:
				cout<<"Ingrese el numero a Buscar"<<endl;
				cin>>x;
				doble[0].abajo.buscar(x);
				break;
			case 0:
				break;
			default:
				cout<<"Opcion no valdida"<<endl;
								
				
		}
		
	}while(op!=0);

/*	cout<<"Inicio"<<endl;
	pi();
	cout<<"Final"<<endl;
	pf();
	*/
	return 0;
}


