#pragma once
#include"Empleado.h"
#include"Piloto.h"
#include"Copiloto.h"
#include"Administrativa.h"
#include"Miscelaneos.h"
#include"Azafata.h"

class NodoEmpleado {
private:
	Empleado* emp;
	NodoEmpleado* sig;
public:
	NodoEmpleado();
	NodoEmpleado(Empleado&, NodoEmpleado*);
	virtual ~NodoEmpleado();
	void setEmpleado(Empleado&);
	void setSigNodo(NodoEmpleado*);
	Empleado* getEmpleado();
	NodoEmpleado* getSigNodo();


};





