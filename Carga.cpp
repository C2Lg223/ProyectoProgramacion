#pragma once
#include"Carga.h"

Carga::Carga(string categ, double AltuPuer, double AnchPuerta,  string TipoAv, Fecha& crea, double disRe, string plac)
	:alturaPuerta(AltuPuer), anchoPuerta(AnchPuerta), categoria(categ), AviacionCivil( TipoAv, crea, disRe, plac) {}
Carga::~Carga() {}
void Carga::setAlturaPuerta(double altP) {alturaPuerta = altP;}
void Carga::setAnchuraPuerta(double AnchoPuer) { anchoPuerta = AnchoPuer; }
double Carga::getAlturaPuerta() {
	return alturaPuerta;
}
double Carga::getAnchoPuerta() { return anchoPuerta; }
string Carga::toString() {
	stringstream s;
	if (creacion != NULL) {
		s << "El avion fue creado en " << creacion->toString() << endl;
	}
	s << "Su distancia recorrida es: " << distanciaReco << endl;
	s << "Placa: " << Placa << endl;
	s << "Tipo: " << tipoAvion << endl;
	s << "Altura de la puerta: " << alturaPuerta << endl;
	s << "Ancho de la Puerta: " << anchoPuerta << endl;
	s << "El avion es: " << Servicio::NombreA(categoria) << endl;
	s << "Max Pasajeros: " << Servicio::Pasajeros(categoria) << endl;
	s << "Carga : " << Servicio::ACarga(categoria) << " metros al cubo" << endl;
	s << " Alcance: " << Servicio::Alcance(categoria) << " km" << endl;

	return s.str();
}

double Carga::AreaAcceso() {
	 return  getAlturaPuerta () * getAnchoPuerta();
}
bool Carga::EsAvionDeCarga() {
	return true;
}

bool Carga::EsAvionComercial() {
	return false;
}