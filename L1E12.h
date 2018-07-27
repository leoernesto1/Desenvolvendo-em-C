// Interface do objeto Time.
using namespace std;
#include <cstring>
// Não incluir header multiplas vezes
#ifndef TIME_H
#define TIME_H
// Definicao do tipo abstrato de dados Time
class Time
{
	public:
		Time(); // construtor default
		void setTime(int, int, int); // set hour, minute e second
		void printMilitary(); // imprime hora em formato militar
		void printStandard(); // imprime hora em formato padrao
		string toStringMilitary(); // hora em formato militar como string
		string toStringStandard(); // hora em formato padrao como string
		void Tick(); // incrementa o horario em 1 segundo
	private:
		int hour; // 0 - 23
		int minute; // 0 - 59
		int second; // 0 - 59
};
#endif 
