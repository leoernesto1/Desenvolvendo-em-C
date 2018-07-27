#include <iostream>
using namespace std;
int main()
{
	int *ptr,b=5;
	ptr = new int;
	cout << "Entre um inteiro";
	cin >> *ptr;
	
	cout << *ptr << "+" << b << "=" << *ptr + b << endl;
	return 0;
}
