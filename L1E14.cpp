#include <iostream>
#include <cstdlib>	//biblioteca para usar o exit -> utiliza metodo para desconstruir
#include "L1E14.h"

using namespace std;

Retangulo::Retangulo()	//não utilizar tipo de dado no método construtor
//Pré-condição: Nenhuma
//Pós-condição: altura e largura recebem o valor 1
{
	altura = 1.0;
	largura = 1.0;
}

Retangulo::Retangulo(float a, float l)
//Pré-condição: a altura e a largura devem ser valores reais entre 0.0 e 20.0
//Pós-condição: altura e largura do objeto recebem o valor dado
{
	if(a>0.0 && a<20.0 && l>0.0 && l<20.0)
	{
		altura = a;
		largura = l;	
	}
	else
		exit(0);
}

float Retangulo::getAltura()
//Pré-condição: Nenhuma
//Pós-condição: Retorna a altura
{
	return altura;
}

float Retangulo::getLargura()
//Pré-condição: Nenhuma
//Pós-condição: Retorna a largura
{
	return largura;
}

float Retangulo::perimetro()
//Pré-condição: Nenhuma
//Pós-condição: Retorna o perimetro
{
	return (2*altura+2*largura);
}

void Retangulo::setAltura(float a)
//Pré-condição: altura deve ser um número real entre 0.0 e 20.0
//Pós-condição: a altura do objeto recebe o valor dado
{
	if(a>0.0 && a<20.0)
		altura = a;
	else
		exit(0);
}

void Retangulo::setLargura(float l)
//Pré-condição: altura deve ser um número real entre 0.0 e 20.0
//Pós-condição: a altura do objeto recebe o valor dado
{
	if(l>0.0 && l<20.0)
		largura = l;
	else
		exit(0);
}

main()
{
	Retangulo r;
	cout << "Altura: " << r.getAltura() << endl;
	cout << "Largura: " << r.getLargura() << endl;
	cout << "Perimetro: " << r.perimetro() << endl << endl;
	
	r.setAltura(10);
	cout << "Altura: " << r.getAltura() << endl;
	cout << "Largura: " << r.getLargura() << endl;
	cout << "Perimetro: " << r.perimetro() << endl << endl;
	
	Retangulo t(10, 19);
	cout << "Altura: " << t.getAltura() << endl;
	cout << "Largura: " << t.getLargura() << endl;
	cout << "Perimetro: " << t.perimetro() << endl << endl;
	
	//Não vai ser executado porque ultrapassa o limite de altura
	r.setLargura(30);
	cout << "Altura: " << r.getAltura() << endl;
	cout << "Largura: " << r.getLargura() << endl;
	cout << "Perimetro: " << r.perimetro() << endl << endl;
	
	
	
}
