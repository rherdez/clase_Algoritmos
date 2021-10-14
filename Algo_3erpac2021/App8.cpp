#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "carro.h"
#include "turismo.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
//carro toyota[5];
carro nissan(5,8);
turismo corolla(5,6,345,2014);
int op;
void llenar();
void presentar();
void ordenar();
void ordenar_sel();
int main(int argc, char** argv) {
	srand(time(NULL));
/*	llenar();
	presentar();
	ordenar_sel();
	cout<<"Ordenado"<<endl;
	presentar();*/
	
	//corolla.n_puertas=2;
	//corolla.tam_baul=25;
/*	corolla.id=5;
	corolla.anio=1990;*/
	
	cout<<"Puertas: "<<corolla.n_puertas<<endl;
	cout<<"Baul: "<<corolla.tam_baul<<endl;
	cout<<"Id: "<<corolla.id<<endl;
	cout<<"Año: "<<corolla.anio<<endl;
	
	
	
			
	return 0;
}
/*void llenar(){
	
	for(int i=0;i<5;i++){
		toyota[i].id=rand()%15;
		toyota[i].anio=2010+i;
	}
}
void presentar(){
	
	for(int i=0;i<5;i++){
		cout<<"Ingrese Id: "<<toyota[i].id<<endl;		
		cout<<"Ingrese Año: "<<toyota[i].anio<<endl;
		toyota[i].actualizar();		
	}
		
}
void ordenar(){
	carro temp;
		for(int x=0;x<5;x++){
			for(int y=1;y<5;y++){
				if(toyota[y-1].id>toyota[y].id){
					temp=toyota[y-1];
					toyota[y-1]=toyota[y];
					toyota[y]=temp;
				}			
		}
	}
}
void ordenar_sel(){
int min;
carro aux;
    for(int i=0;i<5;i++){
        min=i;
        for(int j=i+1;j<5;j++){
            if(toyota[j].id < toyota[min].id){
                min=j;
            }
        }
        aux=toyota[i];
        toyota[i]=toyota[min];
        toyota[min]=aux;
    }
	
}
*/
