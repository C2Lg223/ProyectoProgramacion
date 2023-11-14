#pragma once
#include"AviacionCivil.h"
#include"ServicioClase.h"

class Comercial : public  AviacionCivil {
private:
	string categoria;
public:
	Comercial(string, string, Fecha&, double, string);

	virtual~Comercial();
	string toString();
	bool EsAvionDeCarga();
	bool EsAvionComercial();
	double AreaAcceso();
};
