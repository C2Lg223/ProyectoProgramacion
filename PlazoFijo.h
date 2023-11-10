#pragma once
#include"Contrato.h"
#include <ctime>

class PlazoFijo : public Contrato {
public:
	PlazoFijo(string, string, int, Fecha&, Fecha&);
	virtual~PlazoFijo();
	string toString();
	bool accederATiempoIndefinido();
};