#pragma once
#include"Aeropuerto.h"

#include"Aeropuerto.h"

Aeropuerto::Aeropuerto()
	: nombre(" "), codJuridico(" "), numTelefonico(" ") {
	AeronavesC = new ListaAeronave();
	EmpleadosC = new ListaEmpleado();
	ContratosC = new ListaContratos();

}
Aeropuerto::Aeropuerto(string nom, string codJu, string numTe)
	:nombre(nom), codJuridico(codJu), numTelefonico(numTe) {
	AeronavesC = new ListaAeronave();
	EmpleadosC = new ListaEmpleado();
	ContratosC = new ListaContratos();
	

}
Aeropuerto::~Aeropuerto() {
	delete AeronavesC;
	delete EmpleadosC;
	delete ContratosC;


}

bool Aeropuerto::ingresarAeronave(Aeronaves* aero) {	return AeronavesC->ingresar(*aero);}

bool Aeropuerto::ingresarEmpleado(Empleado*  empl) {     return EmpleadosC->ingresar(*empl); }

bool Aeropuerto::ingresarContrato(Contrato*  Cont) {     return ContratosC->ingresar(*Cont); }

bool Aeropuerto::BuscarPorCed(string ced) { return EmpleadosC->buscarConCedula(ced); }

int Aeropuerto::contarAeronave() { return AeronavesC->contarObjetos(); }
