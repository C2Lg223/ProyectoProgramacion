#pragma once
#include"AviacionCivil.h"
#include"ServicioClase.h"

class Carga : public AviacionCivil {
private:
	double alturaPuerta;
	double anchoPuerta;
	string categoria;

public:
	Carga( string categ,double AltuPuer, double AnchPuerta,string pla, string TipoAv,  Fecha& crea, double disRe);
	virtual~Carga();
	void setAlturaPuerta(double altP);
	void setAnchuraPuerta(double AnchoPuer);
	double getAlturaPuerta();
	double getAnchoPuerta();
	string toString();
	double AreaAcceso();
};
