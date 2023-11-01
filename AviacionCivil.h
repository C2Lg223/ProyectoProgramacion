#pragma once
#include"Aeronaves.h"


class AviacionCivil : public  Aeronaves {
protected:
	string placa;
	string tipoAvion;
public:
	AviacionCivil(string pla, string tipAvion, Fecha& crea, double disRe);
	virtual~AviacionCivil();
	virtual string toString() = 0;

};

