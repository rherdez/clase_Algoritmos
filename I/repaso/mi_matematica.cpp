#include "mi_matematica.h"

mi_matematica::mi_matematica(int p, int h):numeros(p,h)
{
}

int mi_matematica::expo(int b, int e){
	if(e==0){
		return 1;
	}
	else{
		return expo(b,e-1)*b;
	}
}

int mi_matematica::expo(){
	return expo(x,y);
}
