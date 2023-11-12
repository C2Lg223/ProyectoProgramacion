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
	bool existeEmplSegunCed(string);
	Empleado* buscarConCedula(string);
	bool eliminaEmpleado(string ced);
	bool existeEmplSegunCed(string ced);

};







