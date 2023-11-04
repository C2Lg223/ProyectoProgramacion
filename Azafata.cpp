#include "Azafata.h"

Azafata::Azafata(){
	nacionalidad = "indefinido";
}

Azafata::Azafata(string ced, string nom, string ocu, int ed, Aeronaves& av, string nac):Tripulacion(ced, nom, ocu, ed, av), nacionalidad(nac){}

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
	s << "------Informacion de la Azafata------" << endl
		<< "Cedula: " << cedula << endl
		<< "Nombre: " << nombre << endl
		<< "Ocupacion: " << Ocupacion << endl
		<< "Edad: " << edad << endl
		<< "Nacionalidad: " << nacionalidad << endl;
	if (getAvion() != nullptr) {
		s << "------Avion Correspondiente------" << endl // solo se le asigna avion comercial
			<< getAvion()->toString() << endl;
	}
	return s.str();

}



