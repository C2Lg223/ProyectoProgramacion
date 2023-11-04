#pragma once
#include"Tripulacion.h"

class Copiloto : public Tripulacion {
private:
	string telefono;
public:
	Copiloto();
	Copiloto(string, string, string, int, Aeronaves&, string);
	virtual ~Copiloto();
	void setTelefono(string);
	string getTelefono();
	string toString();
};