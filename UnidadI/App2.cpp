#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	char letra = NULL;
	cout<<"Ingrese una letra\n ";
	cin>>letra;
	
	switch(letra){
		case 'a': 
		case 'e': 
		case 'i': 
		case 'o': 
		case 'u': 
			cout<<"Es una vocal"<<endl;
			break;
		default:
			 cout<<"Es una Consonante"<<endl;
	}
	return 0;
}
