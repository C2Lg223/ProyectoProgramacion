
#include"Contrato.h"

Contrato::Contrato()
	: codigo(" "), Puesto(" "), salario(0) {
	//REVISAR SI ESTA CORRECTO
	ingresaTrabajar = NULL;
	FinalizaTrabajo = NULL;

}
Contrato::Contrato( string cod, string pues, int sala, Fecha& Inicio, Fecha& finalizacion)
	: codigo(cod), Puesto(pues), salario(sala), ingresaTrabajar(&Inicio), FinalizaTrabajo(&finalizacion) {}

Contrato::~Contrato() {}
void Contrato::setCodigo(string cod) { codigo = cod; }
void Contrato::setPuesto(string pues) { Puesto = pues; }
void  Contrato::setSalario(int sala) { salario = sala; }
void Contrato::setFechaInicia(Fecha& inicia) { ingresaTrabajar = (Fecha*)&inicia; }
void Contrato::setFechaFinaliza(Fecha& termina) { FinalizaTrabajo = (Fecha*)&termina; }

string  Contrato::getCodigo() { return codigo; }
string  Contrato::getPuesto() { return Puesto; }
int  Contrato::getSalario() { return salario; }
Fecha* Contrato::getFechaInicio() { return ingresaTrabajar; }
Fecha* Contrato::getFechaFinaliza() { return FinalizaTrabajo; }
