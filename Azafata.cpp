#include "Azafata.h"

Azafata::Azafata(string ced, string nom, string ocu, int ed, string nac):Tripulacion(ced, nom, ocu, ed), nacionalidad(nac){}

Azafata::~Azafata()
{
}

void Azafata::setNacionalidad(string nac){
	nacionalidad = nac;
}

string Azafata::getNacionalidad(){
	return nacionalidad;
}

string Azafata::toString(){
	stringstream s;
	s << "*******Informacion de la Azafata*******" << endl
		<< "Cedula: " << cedula << endl
		<< "Nombre: " << nombre << endl
		<< "Ocupacion: " << Ocupacion << endl
		<< "Edad: " << edad << endl
		<< "Nacionalidad: " << nacionalidad << endl
		<< "**************************************";
	return s.str();

}
bool Azafata::EsPiloto() { return false; }

bool Azafata::EsAdministrativa() { return false; }
bool Azafata::EsMicelaneos() { return false; }


