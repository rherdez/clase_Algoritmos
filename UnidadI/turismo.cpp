#include "turismo.h"

turismo::turismo(int x, int y):carro(x,y)
{
	 tam_baul=0;
	 n_puertas=0;
}
turismo::turismo(int x, int y,int p, int a):carro(p, a)
{
	 tam_baul=x;
	 n_puertas=y;
}
