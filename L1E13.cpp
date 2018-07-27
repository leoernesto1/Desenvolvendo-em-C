#include <iostream>
#include "Bag.h"

Bag::Bag()
{
	Used = 0;
	cout << "Sacola criada!" << endl;
}

bool Bag::Full()
{
	if(Used==CAPACITY)
		return true;
	else
		return false;
}

void Bag::Insert(int valor)
{
	if(!Full())
		Data[Used++] = valor;
}

int Bag::Occurrence(int valor)
{
	int total = 0;
	for(int i=0; i<Used; i++)
		if(Data[i]==valor)
			total++;
	return total;
}

void Bag::Remove(int valor)
{
	for(int i=0; i<Used; i++)
		if(Data[i]==valor)
		{
			for(int j=i; j<Used-1; j++)
				Data[j]=Data[j+1];
			Used--;
			break;
		}
}

void Bag::Listar()
{
	cout << "Sacola";
	for(int i=0; i<Used; i++)
		cout << Data[i] << endl;
	cout << endl;
}
main()
{
	Bag b;
	b.Insert(20);
	b.Insert(20);
	b.Insert(10);
	b.Insert(20);
	b.Insert(20);
	b.Insert(10);
	b.Insert(30);
	b.Insert(20);
	b.Insert(10);
	b.Insert(20);
	b.Insert(30);
	cout << "20:" << b.Occurrence(20) << endl;
	cout << "5:" << b.Occurrence(5) << endl;
	cout << "30:" << b.Occurrence(30) << endl;
	b.Listar();

	
	b.Insert(5);
	b.Insert(5);
	b.Remove(20);
	b.Remove(20);
	b.Remove(30);
	b.Remove(10);
	b.Insert(5);
	cout << "20:" << b.Occurrence(20) << endl;
	cout << "5:" << b.Occurrence(5) << endl;
	cout << "30:" << b.Occurrence(30) << endl;
	b.Listar();
	
	cout << b.Full();
}
