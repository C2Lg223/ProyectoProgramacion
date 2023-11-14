#pragma once
#include"Tripulacion.h"

class Piloto : public Tripulacion {
private:
	int aniosExp;
public:
	Piloto(string, string, string, int, int);
	virtual~Piloto();
	void setAniosExp(int);
	int getAniosExp();
	string toString();
	Empleado* copia();
	bool EsPiloto();
	bool EsAdministrativa();
	bool EsMicelaneos();






	
};

