#pragma once
#include"Aeropuerto.h"

#include"Aeropuerto.h"

Aeropuerto::Aeropuerto()
	: nombre(" "), codJuridico(" "), numTelefonico(" ") {
	AeronavesC = new ListaAeronave();
	EmpleadosC = new ListaEmpleado();
	ContratosC = new ListaContrato();

}
Aeropuerto::Aeropuerto(string nom, string codJu, string numTe)
	:nombre(nom), codJuridico(codJu), numTelefonico(numTe) {
	AeronavesC = new ListaAeronave();
	EmpleadosC = new ListaEmpleado();
	ContratosC = new ListaContrato();
	

}
Aeropuerto::~Aeropuerto() {
	delete AeronavesC;
	delete EmpleadosC;
	delete ContratosC;


}
ListaAeronave* Aeropuerto::getContenedorAeronave() { return AeronavesC; }
ListaEmpleado* Aeropuerto::getContenedorEmpleados() { return EmpleadosC; }
ListaContrato* Aeropuerto::getContenedorContrato() { return ContratosC; }

bool Aeropuerto::ingresarAeronave(Aeronaves* aero) {	return AeronavesC->ingresar(*aero);}

bool Aeropuerto::ingresarEmpleado(Empleado*  empl) {     return EmpleadosC->ingresar(*empl); }

bool Aeropuerto::ingresarContrato(Contrato*  Cont) {     return ContratosC->ingresar(*Cont); }

bool Aeropuerto::BusquedaConPorCod(string cod) { return ContratosC->busquedaPorCod(cod); }

int Aeropuerto::contarAeronave() { return AeronavesC->contarObjetos(); }

string Aeropuerto::MostrarContratos() {
	return  ContratosC->toString();
}

string Aeropuerto::MostrarAeronaves() {
	return AeronavesC->toString();
}

bool Aeropuerto::eliminarEmpleado(string ced ) {
	return ContratosC->EliminarEmpleado(ced);
}

string Aeropuerto::reporteAeronavesTripulacion() {
	return ContratosC->reporteAeronaveconTripulacion();
}
string Aeropuerto::MostrarEmpleado() {
	return EmpleadosC->toString();
}

string Aeropuerto::ReporteContratoServicio() {
	return ContratosC->ReporteContratoServicio();
}
string Aeropuerto::ReportePlazoFijo() {
	return  ContratosC->ReportePlazoFijo();
}
string Aeropuerto::ReporteTiempoIndefinido() {
	return ContratosC->ReporteTiempoIndefinido();
}

string Aeropuerto::PilotosDeCarga() {
	return ContratosC->ReportePilotoAvCarga();
}

string Aeropuerto::ReporteEmpleadoEnAvComercial() {
	return ContratosC->EmpleadosDeAvionesComerciales();
}

bool Aeropuerto::existeEmplSegunCedula(string ced) {
	return EmpleadosC->existeEmplSegunCed(ced);
}

bool Aeropuerto::existeContratoConEmpleado(string ced) {
	return ContratosC->existeContratoLigadoAEmpleado(ced);
}

Empleado* Aeropuerto::BuscarPorCed(string ced) {
	return EmpleadosC->buscarConCedula(ced);
}

bool Aeropuerto::listaAeronaveVacio() {
	return AeronavesC->estaVacia();
}

string Aeropuerto::imprimirAeronaves() {
	return AeronavesC->toString();
}

bool Aeropuerto::existeAvionSegunPlaca(string pla) {
	return AeronavesC->existeAvionSegunPlaca(pla);
}

string Aeropuerto::ContratosExcedidos(Fecha& Actual) {
	return ContratosC->ContratosPlazoFijExcedidos(Actual);
}

void Aeropuerto::BuscaEmplConCed(string ced) {
	return ContratosC->BuscaEmplConCed(ced);
}

Aeronaves* Aeropuerto::BuscarAvionCivil(string Placa) {
	return AeronavesC->buscarAvionesCivil(Placa);
}
