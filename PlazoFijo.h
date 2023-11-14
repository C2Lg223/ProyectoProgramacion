#pragma once
#include"Contrato.h"
#include <ctime>

class PlazoFijo : public Contrato {
public:
	PlazoFijo(string, string, double, Fecha&, Fecha&, Empleado&);
	PlazoFijo(string, string, double, Fecha&, Fecha&, Empleado&, Aeronaves&);
	virtual~PlazoFijo();
	string toString();
	bool ContratoExcedido(Fecha& Act);
	int TiempoConContratoFijo(Fecha&);
	bool EsPlazoFijo();
};