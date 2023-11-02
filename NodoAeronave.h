#pragma once
#pragma once
#include"Aeronaves.h"


class Nodo {
private:
	Aeronaves* aeronavePtr;
	Nodo* ptrNodo;
public:
	Nodo() {
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
	}

};