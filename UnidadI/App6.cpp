#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

void suma();
int  resta();
void multiplicar();
void di(int, int);
int presentar(int);
int x,y;
int main(int argc, char** argv) {
	int a,b;
	int op;
	do{
		cout<<"Menu"<<endl;
		cout<<"1) Saludo"<<endl;
		cout<<"2) Mensaje"<<endl;
		cout<<"3) Suma"<<endl;
		cout<<"4) Resta"<<endl;
		cout<<"5) Multiplicar"<<endl;
		cout<<"6) Division"<<endl;
		cout<<"7) Presentar"<<endl;
		cout<<"0) Salida"<<endl;
		cin>>op;
		
		switch(op){
			case 1:
				cout<<"Hola"<<endl;
				break;
			case 2:
				cout<<"Hola Mundo"<<endl;
				break;
			case 3:
				suma();
				break;
			case 4:
				cout<<"La resta es: "<<resta()<<endl;
				break;
			case 5:
				cout<<"Ingrese el numero X: "<<endl;
				cin>>x;
				cout<<"Ingrese el numero y: "<<endl;
				cin>>y;
				multiplicar();
				break;
			case 6:
				cout<<"Ingrese el numero A: "<<endl;
				cin>>a;
				cout<<"Ingrese el numero B: "<<endl;
				cin>>b;
				
				di(a,b);
				break;
			case 7:
				cout<<"Ingrese un numero"<<endl;
				cin>>y;
				cout<<presentar(y)<<endl;
			case 0:
				break;
			default:
				cout<<"Opción no valida"<<endl;							
		}
		
	}while(op!=0);
	
	return 0;
}

void suma(){
	int n1,n2;
	cout<<"Ingrese N1: "<<endl;
	cin>>n1;
	cout<<"Ingrese N2: "<<endl;
	cin>>n2;
	cout<<"El resultado e: "<<n1+n2<<endl;
	
}
int resta(){
	int n1,n2;
	cout<<"Ingrese N1: "<<endl;
	cin>>n1;
	cout<<"Ingrese N2: "<<endl;
	cin>>n2;
	
	return n1-n2;
}
void multiplicar(){
	cout<<"El resultado es :"<<x*y<<endl;
}
void di(int d, int f){
	cout<<"El resultado es :"<<d/f<<endl;
}
int presentar(int x){
	if(x<=0){
		return 10;		
	}
	else{		
		return presentar(x-1)+x;		
	}
	return -1;
}
