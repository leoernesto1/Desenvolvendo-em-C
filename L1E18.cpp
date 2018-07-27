#include <iostream>

using namespace std;

bool PassworkOk(int n, int v[])//Acho q era para ser password, mas blz
{
	int soma;
	
	soma=0;
	//Faz a soma de todos os itens do vetor, exceto do último
	for(int i=0; i<n-1; i++)
		soma=soma+v[i];
	//Verifica se o digito verificador é igual ao resto da divisão da soma por 7
	if(v[n-1]==(soma%7))
		return true;
	return false;
}

main()
{
	int senha1[]={5, 3, 2, 3};
	int senha2[]={7, 2, 0, 1, 5};
	
	if(PassworkOk(4, senha1))
		cout << "A senha1 eh valida" << endl;
	else
		cout << "A senha2 nao eh valida" << endl;
		
	if(PassworkOk(5, senha2))
		cout << "A senha2 eh valida" << endl;
	else
		cout << "A senha2 nao eh valida" << endl;
		
}
