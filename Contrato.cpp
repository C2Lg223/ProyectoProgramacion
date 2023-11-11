#include"Contrato.h"

Contrato::Contrato( string cod, string pues, int sala, Empleado& empl, Aeronaves& aero, Fecha& iniciaTra, Fecha& finalizatra )
	: codigo(cod), Puesto(pues), salario(sala), emple(&empl), avion(&aero), ingresaTrabajar(&iniciaTra), FinalizaTrabajo(&finalizatra) {
}

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
