#include"Contrato.h"

Contrato::Contrato(string cod, string pues, int sal, Fecha& i, Fecha& f, Empleado& emp) :
	codigo(cod), Puesto(pues), salario(sal), ingresaTrabajar(&i), FinalizaTrabajo(&f), emple(&emp) {}

Contrato::Contrato(string cod, string pues, int sal, Fecha& i, Fecha& f, Empleado& emp, Aeronaves& av) :
	codigo(cod), Puesto(pues), salario(sal), ingresaTrabajar(&i), FinalizaTrabajo(&f), emple(&emp), avion(&av) {}

Contrato::~Contrato() {
	if (emple != NULL)delete emple;
	if (avion != NULL)delete avion; 

}
void Contrato::setCodigo(string cod) { codigo = cod; }
void Contrato::setPuesto(string pues) { Puesto = pues; }
void Contrato::setSalario(int sala) { salario = sala; }
void Contrato::setEmpleado(Empleado& empl) { emple = &empl; }
void Contrato::setAeronave(Aeronaves& aer) { avion = &aer; }
void Contrato::setFechaInicia(Fecha& inici) { ingresaTrabajar = &inici; }
void Contrato::setFechaFinaliza(Fecha& finaliz) { FinalizaTrabajo = &finaliz; }

string  Contrato::getCodigo() { return codigo; }
string  Contrato::getPuesto() { return Puesto; }
Empleado* Contrato::getEmpleado() { return emple; }
Aeronaves* Contrato::getAviones() { return avion; }
Fecha* Contrato::getIniciaaTrabajar() { return ingresaTrabajar; }
Fecha* Contrato::getFinalizaTrabajo() { return FinalizaTrabajo; }
int  Contrato::getSalario() { return salario; }
