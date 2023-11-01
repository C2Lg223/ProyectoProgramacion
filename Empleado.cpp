#include"Empleado.h"

Empleado::Empleado()
	:cedula(" "), nombre(" "), Ocupacion(" "), edad(0) {}
Empleado::Empleado(string ced, string nom, string Ocupaci, int ed)
	:cedula(ced), nombre(nom), Ocupacion(Ocupaci), edad(ed) {}
Empleado::~Empleado() {}
void Empleado::setCedula(string ced) { cedula = ced; }
void Empleado::setNombre(string nom) { nombre = nom; }
void Empleado::setOcupacion(string	Ocupac) { Ocupacion = Ocupac; }
void Empleado::setEdad(int ed) { edad = ed; }

string Empleado::getCedula() { return cedula; }
string Empleado::getNombre() { return nombre; }
string Empleado::getOcupacion() { return Ocupacion; }
int Empleado::getEdad() { return edad; }


