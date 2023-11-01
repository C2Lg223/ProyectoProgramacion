#include"Aeronaves.h"

Aeronaves::Aeronaves(Fecha& crea, double disRe) :
	creacion(&crea), distanciaReco(disRe) {	}
Aeronaves::~Aeronaves() {
	if (creacion != NULL) delete creacion;
}

void Aeronaves::setDistanciaRecorida(double dr) {
	distanciaReco = dr;
}
double Aeronaves::getDistanciaRecorrida() { return distanciaReco; }
