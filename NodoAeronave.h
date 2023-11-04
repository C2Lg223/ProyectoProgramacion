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

	/*Nodo() {
		aeronavePtr = NULL;
		ptrNodo = NULL;
	}
	Nodo(Aeronaves& aerona, Nodo* ptr) {
		aeronavePtr = (Aeronaves*)&aerona;
		ptrNodo = ptr;
	}
	virtual~Nodo() {

	}

	void setAeronave(Aeronaves& avion) {
		if (aeronavePtr != NULL) delete aeronavePtr;
		aeronavePtr = (Aeronaves*)&avion;
	}
	void setSiguiNodo(Nodo* ptr) {
		ptrNodo = ptr;
	}

	Aeronaves* getAeronave() {
		return aeronavePtr;
	}
	Nodo* getSigNodo() {
		return ptrNodo;
	}*/

};