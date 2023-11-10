#pragma once
#pragma once
#include"Aeronaves.h"
#include"Carga.h"
#include"AviacionCivil.h"
#include"Comerciales.h"
#include"Militar.h"


class NodoAeronave
{
private:
	Aeronaves* aeronavePtr;
	NodoAeronave* ptrNodo;

public:
	NodoAeronave();
	NodoAeronave(Aeronaves&, NodoAeronave*);
	virtual ~NodoAeronave();
	void setAeronave(Aeronaves&);
	void setSigNodo(NodoAeronave*);

	Aeronaves* getAeronave();
	NodoAeronave* getSigNodo();


};