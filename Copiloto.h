#pragma once
#include"Tripulacion.h"

class Copiloto : public Tripulacion {
private:
	string telefono;
public:
	Copiloto(string, string, string, int, string);
	virtual ~Copiloto();
	void setTelefono(string);
	string getTelefono();
	string toString();
};