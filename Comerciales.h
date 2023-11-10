#pragma once
#include"AviacionCivil.h"
#include"ServicioClase.h"

class Comercial : public  AviacionCivil {
private:
	string categoria;
public:
	Comercial(string catego, string plac, string Tipo, Fecha& crea, double disRe); 

	virtual~Comercial();
	string toString();
};
