#pragma once
#include"NodoEmpleado.h"

class ListaEmpleado {
private:
	NodoEmpleado* ppio;
public:
	ListaEmpleado();
	virtual ~ListaEmpleado();
	bool estaVacia();
	bool ingresar(Empleado&);
	string toString();
	string  buscarConCedula(string);
};







