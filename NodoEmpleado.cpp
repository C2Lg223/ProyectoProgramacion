#include "NodoEmpleado.h"

NodoEmpleado::NodoEmpleado(){
	emp = nullptr;
	sig = nullptr;
}

NodoEmpleado::NodoEmpleado(Empleado* empl, NodoEmpleado* nod) : emp(empl), sig(nod){}

NodoEmpleado::~NodoEmpleado(){
	if (emp != nullptr) delete emp;
}

void NodoEmpleado::setEmpleado(Empleado& empl) {
	emp = (Empleado*)&empl;
}

void NodoEmpleado::setSigNodo(NodoEmpleado* nod){
	sig = nod;
}

Empleado* NodoEmpleado::getEmpleado(){
	return emp;
}

NodoEmpleado* NodoEmpleado::getSigNodo(){
	return sig;
}

string NodoEmpleado::toString(){
	stringstream s;

}

