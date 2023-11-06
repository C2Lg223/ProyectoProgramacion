#pragma once
#include"Empleado.h"

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





