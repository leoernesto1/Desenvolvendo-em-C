#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	float media;
	
	media = 123.0;
	cout << "Media = " << media << endl;
	cout << "Media = " << setprecision(2) << media << endl;
	cout << "Media = " << media << " " << setprecision(4) << media << "\n";
	cout << "Media = " << setprecision(5) << media << endl;
	cout << "Media = " << media << "\n";
	cout << "Media = " << setprecision(6)
		<< setiosflags(ios::fixed | ios::showpoint) << media << endl;
	
	media = 123.45678;
	cout << setw(20) << "Media = " << media << endl;
	cout << "Media = " << setprecision(2) << media << endl;
	cout << "Media = " << media << " " << setprecision(4) << media << "\n";
	cout << "Media = " << setprecision(5) << media << endl;
	cout << "Media = " << setw(5) << media << "\n";
	cout << "Media = " << setprecision(6)
		<< setiosflags(ios::fixed | ios::showpoint) << media << endl;
	
	return 0;
}
