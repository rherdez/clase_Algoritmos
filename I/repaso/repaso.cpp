#include <iostream>
#include "mi_matematica.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;


int main(int argc, char** argv) {
	mi_matematica m(2,3);
	cout<<"Resultado: "<<m.expo()<<endl;
	
	return 0;
}

