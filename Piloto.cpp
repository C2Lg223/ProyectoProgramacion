#include "Piloto.h"

Piloto::Piloto(){
	aniosExp = 0;
}

Piloto::Piloto(string ced, string nom, string ocu, int ed, Aeronaves& av, int aE) : Tripulacion(ced, nom, ocu, ed, av), aniosExp(aE){}

Piloto::~Piloto()
{
}

void Piloto::setAniosExp(int aE){
	aniosExp = aE;
}

int Piloto::getAniosExp(){
	return aniosExp;
}

string Piloto::toString(){
	stringstream s;
	s << "------Informacion del Piloto------" << endl
		<< "Cedula: " << cedula << endl
		<< "Nombre: " << nombre << endl
		<< "Ocupacion: " << Ocupacion << endl
		<< "Edad: " << edad << endl
		<< "Anios de Experiencia: " << aniosExp << endl;
	if (getAvion() != nullptr) {
		s << "------Avion Correspondiente------" << endl
			<< getAvion()->toString() << endl;
	}
	return s.str();
	

}
