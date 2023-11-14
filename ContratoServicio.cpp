#include"ContratoServicio.h"

ContratoServicio::ContratoServicio(string hor, string tipServ, string cod, string pues, double sal, Fecha& i, Fecha& f, Empleado& emp) : Contrato(cod, pues, sal, i, f, emp), HorarioLaboral(hor), tipoServicio(tipServ) {}

ContratoServicio::ContratoServicio(string hor, string tipServ, string cod, string pues, double sal, Fecha& i, Fecha& f, Empleado& emp, Aeronaves& av) : Contrato(cod, pues, sal, i, f, emp, av), HorarioLaboral(hor), tipoServicio(tipServ) {}



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

bool ContratoServicio::ContratoExcedido(Fecha&) { return false; }
bool ContratoServicio::EsPlazoFijo() { return false; }