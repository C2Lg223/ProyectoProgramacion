#pragma once
#include"Empleado.h"
#include"Aeronaves.h"

class Tripulacion : public Empleado {

public:
	Tripulacion(string, string, string, int);
	virtual ~Tripulacion();

	virtual string toString() = 0;
	virtual bool EsPiloto() = 0;
	virtual  bool EsAdministrativa() = 0;
	virtual  bool EsMicelaneos() = 0;
};