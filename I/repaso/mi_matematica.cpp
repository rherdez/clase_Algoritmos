#include "mi_matematica.h"

mi_matematica::mi_matematica()
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
