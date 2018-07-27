#include <iostream>
using namespace std;
int main()
{
	int i,*v,n;
	cout << "Entre um inteiro";
	cin >> n;
	v = new int[n];
	for(i=0;i<n;i++)
	{
		cout << "v[" << i << "]=";
		cin >> v[i];
	}
	cout << "Valores lidos" << endl;
	for(i=0;i<n;i++)
		cout << "v[" << i << "]=" << v[i] << endl;
	delete [] v;
	return 0;
}
