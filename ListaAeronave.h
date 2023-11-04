#pragma once
#include"NodoAeronave.h"

class ListaAeronave {
private:
	NodoAeronave* ppio;
public:
	ListaAeronave();
	virtual~ListaAeronave();
	bool estaVacia();
	bool ingresar(Aeronaves&);
	string toString();
};




