#pragma once
#include"NodoEmpleado.h"

class ListaEmpleado {
private:
	NodoEmpleado* ppio;
public:
	ListaEmpleado();
	virtual ~ListaEmpleado();
	bool listaEmpleadoVacia();
		
	bool ingresar(Empleado&);
	string toString();
	Empleado* buscarConCedula(string);
	bool eliminaEmpleado(string ced);
	bool existeEmplSegunCed(string ced);

};







