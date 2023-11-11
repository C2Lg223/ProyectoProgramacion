#include"ContratoServicio.h"

ContratoServicio::ContratoServicio(string Horario, string tipSer, string cod, string pues, int sala,  Empleado& empl, Aeronaves& avion, Fecha& Ingresa, Fecha& finaliza)
	: HorarioLaboral(Horario), tipoServicio(tipSer), Contrato(cod, pues, sala, empl, avion, Ingresa, finaliza) {
}
ContratoServicio::~ContratoServicio() {}
void ContratoServicio::setHorarioLaboral(string Horario) { HorarioLaboral = Horario; }
void ContratoServicio::setTipoServicio(string tipSer) { tipoServicio = tipSer; }
string ContratoServicio::getHorarioLaboral() { return HorarioLaboral; }
string ContratoServicio::getTipoServicio() { return tipoServicio; }
string ContratoServicio::toString() {
	stringstream s;
	s << "--------------------- Contrato por Servicio ----------------------" << endl;
	s << " Codigo de contrato: " << codigo << endl;
	s << " Puesto: " << Puesto << endl;
	s << " Salario Base: " << salario << endl;
	s << " Horario de Trabajo: " << HorarioLaboral << endl;
	s << " Tipo de Servicio que realiza: " << tipoServicio << endl;
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