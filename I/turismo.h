#include "carro.h"
#ifndef TURISMO_H
#define TURISMO_H

class turismo:public carro
{
	public:
		turismo();
		turismo(int ,int);
		turismo(int x,int y,int p, int a);
	
		int tam_baul;
		int n_puertas;
	protected:
};

#endif
