
#pragma warning(disable: 4996)
#include"PlazoFijo.h"

PlazoFijo::PlazoFijo(string cod, string pues, int sala, Fecha& Ingresa, Fecha& finaliza) 
	:Contrato(cod, pues, sala, Ingresa, finaliza) {}

PlazoFijo::~PlazoFijo() {}
string PlazoFijo::toString() {
	stringstream s;

	s << "--------------------- Contrato por Plazo Fijo ----------------------" << endl;
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
	return s.str();
}


bool PlazoFijo::accederATiempoIndefinido() {
	time_t tiempoActual= time (nullptr);
	tm* fechaActual = localtime(&tiempoActual);

	int aniosTraba = fechaActual->tm_year + 1900 - ingresaTrabajar->getAnnio();
	if (fechaActual->tm_mon < ingresaTrabajar->getMes() ||
		(fechaActual->tm_mon == ingresaTrabajar->getMes() && fechaActual->tm_mday < ingresaTrabajar->getDia())) {
		aniosTraba--;
	}
	return aniosTraba >= 2;
}