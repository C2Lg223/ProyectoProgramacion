#pragma once
#include"Tripulacion.h"

class Azafata : public Tripulacion {
private:
	string nacionalidad;
public:
	
	Azafata(string, string, string, int, string);
	virtual ~Azafata();
	void setNacionalidad(string);
	string getNacionalidad();
	string toString();
	bool EsPiloto();
	bool EsAdministrativa();
	bool EsMicelaneos();
};




