#pragma once
#include"Contrato.h"
#include"ContratoServicio.h"
#include"PlazoFijo.h"
#include"TiempoIndefinido.h"
#include"Piloto.h"
#include"Copiloto.h"
#include"Azafata.h"	
#include"Miscelaneos.h"
#include"Administrativa.h"
#include"AviacionCivil.h"
#include"ContratoServicio.h"

class NodoContrato {


private:
	Contrato* contratoPtr;
	NodoContrato* ptrNodo;


public:
	NodoContrato();
	NodoContrato(Contrato&, NodoContrato*);
	virtual ~NodoContrato();
	void setContrato(Contrato&);
	void setSigNodo(NodoContrato*);
	Contrato* getContrato();
	NodoContrato* getSigNodo();

};
