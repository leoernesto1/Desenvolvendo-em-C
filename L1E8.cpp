#include <iostream>
using namespace std;
int main()
{
	int a, *aPtr;
	a = 7;
	aPtr = &a;
	cout << "Endereco de a = " << &a
		<< "\nValor de aPtr = " << aPtr;
	cout << "\n\nValor de a = " << a
		<< "\nValor de *aPtr = " << *aPtr;
	cout << "Mostrando que * e & são inversos entre si"
		<< "\n&*aPtr = " << &*aPtr
		<< "\n*&aPtr = " << *&aPtr << endl;
	return 0;
}
