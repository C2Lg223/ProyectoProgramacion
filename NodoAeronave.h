#pragma once
#pragma once
#include"Aeronaves.h"


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
	string toString();

	


};