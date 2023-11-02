#include "TiempoIndefinido.h"

TiempoIndefinido::TiempoIndefinido(Plaza& numOne, string cod, string pues, int sala, Fecha& Ingresa, Fecha& finaliza)
	: nPlaza(&numOne), Contrato(cod, pues, sala, Ingresa, finaliza) {}
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
