#include"Aeronaves.h"

Aeronaves::Aeronaves(Fecha& crea, double disRe, string pla) :
	creacion(&crea), distanciaReco(disRe), placa(placa) {	}
Aeronaves::~Aeronaves() {
	if (creacion != NULL) delete creacion;
}

void Aeronaves::setDistanciaRecorida(double dr) {
	distanciaReco = dr;
}
void Aeronaves::setFechaCreacion(Fecha& CreacionAvion) { creacion = (Fecha*)&CreacionAvion; }
void Aeronaves::setPlaca(string Pl) { placa = Pl; }
Fecha* Aeronaves::getFechaCreacion() { return creacion; }
double Aeronaves::getDistanciaRecorrida() { return distanciaReco; }

string Aeronaves::getPlaca(){
	return placa;
}

int Aeronaves::EdadAviones(Fecha& actual){
		int AnnioPF = 0;
		int diaActual = actual.getDia();
		int MesActual = actual.getMes();
		int AnioActual = actual.getAnnio();
	
		AnnioPF = AnioActual - creacion->getAnnio();

		//Comprueba si todavia no tiene un annio
		if (MesActual < creacion->getMes() || (MesActual == creacion->getMes() && diaActual == creacion->getDia())) {
			AnnioPF--;
		}

		return AnnioPF;

}
