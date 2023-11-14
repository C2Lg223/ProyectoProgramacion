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
	int contarObjetos();
	Aeronaves* busquedaPorPlaca(string pla);
	bool existeAvCivil(string pla);
	bool existeAvComercial(string pla);
	bool existeComercial();
	Aeronaves* MayorAreaAcceso();
	bool existeAvionSegunPlaca(string pla);
	string imprimirComerciales();
	string AeronavesCon20annio(Fecha&);
};




