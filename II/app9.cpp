#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main(int argc, char** argv) {
	int *p	=new int;
	*p=15;
	int v=5;

	cout<<"Variable: "<<v<<endl;
	cout<<"Puntero: "<<*p<<endl;
	
	cout<<"Memoria Variable: "<<&v<<endl;
	cout<<"Memoria Puntero: "<<p<<endl;
	
	p=&v;
	
	
	
	cout<<"Memoria Variable: "<<&v<<endl;
	cout<<"Memoria Puntero: "<<p<<endl;

	*p=50;
	cout<<"Variable: "<<v<<endl;
	cout<<"Puntero: "<<*p<<endl;
	
	v=60;
	cout<<"Variable 3: "<<v<<endl;
	cout<<"Puntero 3: "<<*p<<endl;
	
	p=new int;
	*p=90;
	
	cout<<"Variable 4: "<<v<<endl;
	cout<<"Puntero 4: "<<*p<<endl;
	
	cout<<"Memoria Variable: "<<&v<<endl;
	cout<<"Memoria Puntero: "<<p<<endl;
	return 0;
}
