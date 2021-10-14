#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	
	int n1=0,n2=0, resultado=0;

	cout<<"Digite un numero: "; cin>>n1;
	cout<<"Digite otro numero: "; cin>>n2;
	
	for(int i=1; i<=n2; i++){
		  resultado+=n1;

	}
		cout<<"El resultado de la multiplicacion es: "<<resultado;
		
	return 0;
}
