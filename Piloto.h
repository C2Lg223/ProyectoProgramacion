#pragma once
#include"Tripulacion.h"

class Piloto : public Tripulacion {
private:
	int aniosExp;
public:
	Piloto();
	Piloto(string, string, string, int, Aeronaves&, int);
	virtual~Piloto();
	void setAniosExp(int);
	int getAniosExp();
	string toString();






	
};

