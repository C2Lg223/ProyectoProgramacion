#include "TiempoIndefinido.h"


TiempoIndefinido::TiempoIndefinido(Plaza& numOne, string cod, string puest, double sal, Fecha& Ingresa, Empleado& empl)
	:nPlaza(&numOne), Contrato(cod, puest, sal, Ingresa, empl) {}

TiempoIndefinido::TiempoIndefinido(Plaza& numOne, string cod, string pues, double sala,  Fecha& Ingresa, Empleado& empl, Aeronaves& avion)
	: nPlaza(&numOne), Contrato(cod, pues, sala, Ingresa, empl, avion) {}
TiempoIndefinido::~TiempoIndefinido() {}
void TiempoIndefinido::setPlazaC(Plaza& pla) { nPlaza = (Plaza*)&pla; }
Plaza* TiempoIndefinido::getPlazaC() { return nPlaza; }

string TiempoIndefinido:: toString() {
	stringstream s;
	
	s << "--------------------- Contrato por Servicio ----------------------" << endl;
	s << " Codigo de contrato: " << codigo << endl;
	s << " Puesto: " << Puesto << endl;
	s << " Salario Base: " << salario << endl;
	if (ingresaTrabajar != NULL) {
		s << "---------------------------------------" << endl;
		s << " Fecha en la cual ingresa a Trabajar  " << ingresaTrabajar->toString() << endl;
	}
	if (FinalizaTrabajo != NULL) {
		s << "---------------------------------------" << endl;
		s << " Fecha de Finalizacion: " << FinalizaTrabajo->toString() << endl;
	}
	s << " Informacion sobre plaza " << endl;
	if (nPlaza != NULL) {
		s << "Codigo de plaza: " << nPlaza->getCodigoPlaza() << endl;
		s << " Descripcion del puesto: " << nPlaza->getDescripcionPuesto() << endl;
	}
	return s.str();
	
	
}

bool TiempoIndefinido::ContratoExcedido(Fecha&) { return false; }
bool TiempoIndefinido::EsPlazoFijo() { return false; }
