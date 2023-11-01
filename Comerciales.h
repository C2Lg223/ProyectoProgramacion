#pragma once
#include"AviacionCivil.h"
#include"ServicioClase.h"

class Comerciales : public AviacionCivil {
private:
	string categoria;
public:
	Comerciales(string catego, string plac, string Tipo, Fecha& crea, double disRe); 

	virtual~Comerciales();
	string toString();
};
