#pragma once
#include"Contrato.h"
#include <ctime>

class PlazoFijo : public Contrato {
public:
	PlazoFijo(string, string, int, Empleado&, Aeronaves&, Fecha&, Fecha&);
	virtual~PlazoFijo();
	string toString();
	bool EstaExcedido(Fecha& Act);
	int TiempoConContratoFijo(Fecha&);
};