// Implementacao dos metodos para objeto Time.
#include <sstream>
#include <iostream>
#include "L1E12.h"
#include <string>
using namespace std;

Time::Time()
// Pre: Nenhuma
// Pos: Construtor Time inicia cada elemento de dados em zero,
// assegurando que todos os objetos Time iniciem num estado consistente.
{
	 hour = minute = second = 0;
}

void Time::setTime(int h, int m, int s)
// Pre: Valores validos para hora (h), minuto (m) e segundo (s) sejam fornecidos.
// Pos: Atribui novos valores de hora (24 horas).
// Verificacao da validade dos valores fornecidos.
// Atribui zero aos valores invalidos (estado consistente).
{
	 hour = (h >= 0 && h < 24) ? h : 0;
	 minute = (m >= 0 && m < 60) ? m : 0;
	 second = (s >= 0 && s < 60) ? s : 0;
}

void Time::printMilitary()
// Pre: Nenhuma.
// Pos: Horario no formato 24 horas e' impresso.
{
	 cout << (hour < 10 ? "0" : "") << hour << ":"
	 << (minute < 10 ? "0" : "") << minute << ":"
	 << (second < 10 ? "0" : "") << second;
}

string Time::toStringMilitary()
{
	 string s;
	 ostringstream sm;
	 sm << (hour < 10 ? "0" : "") << hour << ":"
	 << (minute < 10 ? "0" : "") << minute << ":"
	 << (second < 10 ? "0" : "") << second;
	 s=sm.str();
	 return s;
}

void Time::printStandard()
// Pre: Nenhuma.
// Pos: Horario no formato 12 horas (AM/PM) e' impresso.
{
	 cout << ((hour == 0 || hour == 12) ? 12 : hour % 12)
	 << ":" << (minute < 10 ? "0" : "") << minute
	 << ":" << (second < 10 ? "0" : "") << second
	 << (hour < 12 ? " AM" : " PM");
}

string Time::toStringStandard()
{
	 string s;
	 ostringstream sm;
	 sm << ((hour == 0 || hour == 12) ? 12 : hour % 12)
	 << ":" << (minute < 10 ? "0" : "") << minute
	 << ":" << (second < 10 ? "0" : "") << second
	 << (hour < 12 ? " AM" : " PM");
	 s=sm.str();
	 return s;
}

void Time::Tick()
{
	 if(second==59)
	 {
	 	 second=0;
	 	 if(minute==59)
	 	 {
	 	 	minute=0;
	 	  	if(hour==23)
	 		{
	 			hour=0;
	 		}
	 		else
	 		{
	 			hour++;
	 		}
	 	 } 
	 	 else
	 		minute++;
	 }
	 else
	 	second++;
}

main()
{
	Time t;
	t.setTime(23, 59, 55);
	
	t.Tick();
	cout << t.toStringStandard() << endl;
	t.Tick();
	cout << t.toStringStandard() << endl;
	t.Tick();
	cout << t.toStringStandard() << endl;
	t.Tick();
	cout << t.toStringStandard() << endl;
	t.Tick();
	cout << t.toStringStandard() << endl;
	t.Tick();
	cout << t.toStringStandard() << endl;
	t.Tick();
	cout << t.toStringStandard() << endl;
	t.Tick();
	cout << t.toStringStandard() << endl;
	t.Tick();
	cout << t.toStringStandard() << endl;
}
