

#include"PlazoFijo.h"

PlazoFijo::PlazoFijo(string cod, string pues, double sala,  Fecha& Ingresa, Fecha& finaliza, Empleado& empl)
	:Contrato(cod, pues, sala,Ingresa, finaliza,empl) {}

PlazoFijo::PlazoFijo(string cod, string pues, double sala, Fecha& Ingresa, Fecha& finaliza, Empleado& empl, Aeronaves& avion)
	:Contrato(cod, pues, sala, Ingresa, finaliza, empl, avion) {}

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

int PlazoFijo::TiempoConContratoFijo(Fecha& Actual) {
	int AnnioPF = 0;
	int diaActual = Actual.getDia();
	int MesActual = Actual.getMes();
	int AnioActual = Actual.getAnnio();

	AnnioPF = AnioActual - ingresaTrabajar->getAnnio();

	//Comprueba si todavia no tiene un annio
	if (MesActual < ingresaTrabajar->getMes() || (MesActual == ingresaTrabajar->getMes() && diaActual == ingresaTrabajar->getDia())) {
		AnnioPF--;
	}

	return AnnioPF;
}
bool PlazoFijo::ContratoExcedido(Fecha& Act) {
	
	if (TiempoConContratoFijo(Act) > 2)
		return true;
}


bool PlazoFijo::EsPlazoFijo() { return true; }
