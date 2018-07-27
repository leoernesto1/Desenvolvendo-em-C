// CriarDestruir.cpp
// Metodos da classe CriarDestruir
#include <iostream>
#include "L1E17.h"
using namespace std;
CriarDestruir::CriarDestruir(int valor)
{
	dado = valor;
	cout << "Objeto " << dado << " construtor";
}
CriarDestruir::~CriarDestruir()
{
	cout << "Objeto " << dado << " destruidor" << endl;
}

// variavel global
CriarDestruir primeiro(1);

void criar(void)
{
	CriarDestruir quarto(4);
	cout << " (local em criar)" << endl;
	
	CriarDestruir quinto(5);
	cout << " (local em criar)" << endl;
}

int main()
{
	cout << " (global criado antes de main)" << endl;
	
	CriarDestruir segundo(2);
	cout << " (local em main)" << endl;
	
	criar();
	
	CriarDestruir terceiro(3);
	cout << " (local em main)" << endl;
	
	return 0;
}
