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
	Empleado* buscarConCedula(string);
	bool eliminaEmpleado(string ced);
	bool hayPilotos();

};







