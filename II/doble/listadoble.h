#ifndef LISTADOBLE_H
#define LISTADOBLE_H
#include "nodo_c.h"
#include <iostream>
using namespace std;
class listadoble
{
	public:
		
		nodo_c *I,*F,*T;
		listadoble();
		
		void agregar(int x);
		void pi();
		void pf();
		void buscar(int);
	protected:
};

#endif
