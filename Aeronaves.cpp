#include"Aeronaves.h"

Aeronaves::Aeronaves(Fecha& crea, double disRe, string pla) :
	creacion(&crea), distanciaReco(disRe), Placa(pla) {	}
Aeronaves::~Aeronaves() {
	if (creacion != NULL) delete creacion;
}

void Aeronaves::setDistanciaRecorida(double dr) {
	distanciaReco = dr;
}
void Aeronaves::setFechaCreacion(Fecha& CreacionAvion) { creacion = (Fecha*)&CreacionAvion; }
void Aeronaves::setPlaca(string Pl) { Placa = Pl; }
Fecha* Aeronaves::getFechaCreacion() { return creacion; }
double Aeronaves::getDistanciaRecorrida() { return distanciaReco; }
string Aeronaves::getPlaca() { return Placa; }
