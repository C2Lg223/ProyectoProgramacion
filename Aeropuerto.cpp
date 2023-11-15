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

Contrato* Aeropuerto::BusquedaCodContrato(string cod) { return ContratosC->MostrarPorCod(cod); }

bool Aeropuerto::existeEmplSegunCedula(string ced){
	return EmpleadosC->existeEmplSegunCed(ced);
}

bool Aeropuerto::existeContratoConEmpleado(string ced){
	return ContratosC->existeContratoLigadoAEmpleado(ced);
}

Empleado* Aeropuerto::BuscarPorCed(string ced){
	return EmpleadosC->buscarConCedula(ced);
}

Empleado* Aeropuerto::buscarEmpleadoPorAvi(string pla)
{
	return ContratosC->buscaEmpEnAvion(pla);
}

bool Aeropuerto::eliminarAvionPorPlaca(string pla)
{
		return AeronavesC->eliminarAvionPorPlaca(pla);
}

bool Aeropuerto::listaAeronaveVacio(){
	return AeronavesC->estaVacia();
}

string Aeropuerto::imprimirAeronaves(){
	return AeronavesC->toString();
}

string Aeropuerto::imprimirComerciales(){
	return AeronavesC->imprimirComerciales();
}

bool Aeropuerto::existeAvionSegunPlaca(string pla){
	return AeronavesC->existeAvionSegunPlaca(pla);
}

Aeronaves* Aeropuerto::buscarAvPorPlaca(string pla){
	return AeronavesC->busquedaPorPlaca(pla);
}

bool Aeropuerto::existeAvCivilSegunPlaca(string pla){
	return AeronavesC->existeAvCivil(pla);
}

bool Aeropuerto::existeAvComeercialSegunPlaca(string pla){
	return AeronavesC->existeAvComercial(pla);
}

bool Aeropuerto::existeComercial(){
	return AeronavesC->existeComercial();
}
bool Aeropuerto::existeContratoPorCod(string cod) {
	return ContratosC->existeContradoPorCod(cod);
}

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
bool Aeropuerto::eliminarContratoPorCod(string cod) {
	return ContratosC->eliminarContrato(cod);
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

string Aeropuerto::ContratosExcedidos(Fecha& Actual) {
	return ContratosC->ContratosPlazoFijExcedidos(Actual);
}

void Aeropuerto::BuscaEmplConCed(string ced) {
	return ContratosC->BuscaEmplConCed(ced);
}

Aeronaves* Aeropuerto::BuscarAvion(string Placa) {
	return AeronavesC->busquedaPorPlaca(Placa);
}

bool Aeropuerto::existeContratoExcedido(Fecha& actual) {
	return ContratosC->existeContratosExcedido(actual);
}

//Confirmar si las lista estan vacias 

bool Aeropuerto::listaEmpleadoVacia() {
	return EmpleadosC->listaEmpleadoVacia();
}

bool Aeropuerto::listaContratovacia()
{
	return ContratosC->listaContratosestaVacia();
}

string Aeropuerto::AvionesDe20annios(Fecha& actual) {
	return AeronavesC->AeronavesCon20annio(actual);
}


Aeronaves* Aeropuerto::MayorAreaAcceso() {
	return AeronavesC->MayorAreaAcceso();
}
