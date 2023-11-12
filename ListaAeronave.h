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
	bool existeAvionSegunPlaca(string pla);
	Aeronaves* busquedaPorPlaca(string pla);
	bool existeAvCivil(string pla);
	bool existeAvComercial(string pla);
	bool existeComercial();
	bool eliminarAeronave(string placa);
	bool hayAvionDeCarga();
	Aeronaves* MayorAreaAcceso();
	string imprimirComerciales();
};




