#pragma once
#include"Aeronaves.h"


class AviacionCivil : public  Aeronaves {
protected:
	string tipoAvion;
public:
	AviacionCivil( string tipAvion, Fecha& crea, double disRe, string);
	virtual~AviacionCivil();
	void setTipoAvion(string TpAv);
	string getTipoAvion();
	virtual string toString() = 0;
	virtual bool EsAvionDeCarga() = 0;
	virtual bool EsAvionComercial() = 0;
	virtual double AreaAcceso() = 0;

};

