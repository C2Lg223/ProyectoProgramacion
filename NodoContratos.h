#pragma once
#include"Contrato.h"

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
