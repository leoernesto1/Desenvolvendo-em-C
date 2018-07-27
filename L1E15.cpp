#include <iostream>
#include "L1E15.h"

using namespace std;

Complexo::Complexo(float a, float b)
{
	real = a;
	imaginaria = b;
}

Complexo Complexo::adicao(Complexo c1, Complexo c2)
{
	Complexo c(c1.real + c2.real,c1.imaginaria + c2.imaginaria);
	
	return c;
}

Complexo Complexo::subtracao(Complexo c1, Complexo c2)
{
	Complexo c(c1.real - c2.real,c1.imaginaria - c2.imaginaria);
	
	return c;
}

void Complexo::escrever()
{
	cout << "(" << real << ", "<< imaginaria << ")" << endl;
}

main()
{
	Complexo i(0,0), j(1,1), k(-1, 10), m(10, 9);
	i.escrever();
	k.escrever();
	
	i = i.adicao(j, k);	//acredito q esse método não deveria ser chamado assim, mas não consigo chamá-lo de outro jeito
	i.escrever();
	
	k = k.subtracao(k, m);
	k.escrever();
}
