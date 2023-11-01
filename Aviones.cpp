#include"Aviones.h"

Aviones::Aviones(Fecha& crea, double disRe) :
	creacion(&crea), distanciaReco(disRe) {	}
Aviones::~Aviones() {
	if (creacion != NULL) delete creacion;
}

void  Aviones::setDistanciaRecorida(double dr) {
	distanciaReco = dr;
}
double  Aviones::getDistanciaRecorrida() { return distanciaReco; }
