#pragma once
#include"Contrato.h"
#include"ContratoServicio.h"
#include"PlazoFijo.h"
#include"TiempoIndefinido.h"

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
