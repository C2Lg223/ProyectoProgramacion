#pragma once
#include"Contrato.h"

class PlazoFijo : public Contrato {
public:
	PlazoFijo(string, string, int, Fecha&, Fecha&);
	virtual~PlazoFijo();
	string toString();
};