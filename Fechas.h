#pragma once
#include<iostream>
#include<sstream>
using namespace std;

class Fecha {
private:
	int dia;
	int mes;
	int annio;

public:

	Fecha();
	Fecha(int d, int m, int a);
	virtual~Fecha();
	void setDia(int d);
	void setMes(int me);
	void setAnnio(int a);
	int getDia();
	int getMes();
	int getAnnio();
	string toString();
	bool operator==(const Fecha& other) const;
};
