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

bool Aeropuerto::hayPilotos() { return EmpleadosC->hayPilotos(); }

bool Aeropuerto::hayAvionesCarga() { return AeronavesC->hayAvionDeCarga(); }

void Aeropuerto::MostrarContratos() {
	stringstream s;
	s << ContratosC->toString() << endl;
}

string Aeropuerto::MostrarAeronaves() {
	return AeronavesC->toString();
}

bool Aeropuerto::eliminarEmpleado(string ced ) {
	return EmpleadosC->eliminaEmpleado(ced);
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



/* void Aeropuerto::PilotosDeCarga() {
	stringstream s;
	NodoContrato* nod = ContratosC; 

	
	while (ContratosC != NULL) {
		NodoContrato* con = nod->getSigNodo();
	
		if (hayPilotos() && hayAvionesCarga()) {
			Empleado* emp = con->getContrato()->getEmpleado();
			Aeronaves* aero = con->getContrato()->getAviones(); 

			if (emp != NULL && aero != NULL) {
				if (typeid(*emp) == typeid(Piloto) && typeid(*aero) == typeid(Carga)) {
					s << " Los Pilotos de Aviones de Carga son: " << endl;
					s << emp->toString();
				}
			}
			
		}
		cout << s.str();

	}


}   */

