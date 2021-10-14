#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;
int arreglo[5][5];

void llenar();
void presentar();
/*int mayor();
void ordenar();
void ordenar2();*/
int main(int argc, char** argv) {
	srand(time(NULL));
	llenar();
	presentar();
/*	cout<<"El mayor es: "<<mayor()<<endl;
	cout<<"Ordenar"<<endl;
	ordenar2();
	presentar();*/
	return 0;
}

void llenar(){
	for(int i=0;i<5;i++){
		for(int x=0;x<5;x++){
			arreglo[i][x]=x+1;
		}
	//	arreglo[i]=rand()%20;
//arreglo[i]=i;
	}
}

void presentar(){
	for(int i=0;i<5;i++){
		for(int x=0;x<5;x++){
			//	cout<<"#"<<i<<" ->"<<
			cout<<arreglo[x][i]<<"|";
		}
		cout<<endl;
	}
}
/*
int mayor(){
	int temp=arreglo[0];
	for(int i=1;i<10;i++){
		if(arreglo[i]>temp){
			temp=arreglo[i];
		}
	}
	return temp;
}

void ordenar(){
	int temp;
	int contador=0;
	for(int x=0;x<10;x++){
		for(int y=1;y<10;y++){
			contador++;
			if(arreglo[y-1]>arreglo[y]){
				temp=arreglo[y-1];
				arreglo[y-1]=arreglo[y]	;
				arreglo[y]=temp;
			}
		}
	}
	cout<<"cantidad"<<contador<<endl;
}
void ordenar2(){
		int temp;
	int contador=0;
	for(int x=0;x<10;x++){
		int contador=0;
		for(int y=1;y<10;y++){
			if(arreglo[y-1]<arreglo[y]){
				temp=arreglo[y-1];
				arreglo[y-1]=arreglo[y]	;
				arreglo[y]=temp;
			}
			else contador++;
		}
		if(contador == 9) break;
	}
}*/
