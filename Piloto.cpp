#include "Piloto.h"


Piloto::Piloto(string ced, string nom, string ocu, int ed, int aE) : Tripulacion(ced, nom, ocu, ed), aniosExp(aE){}

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
	s << "***********Informacion del Piloto*********" << endl
		<< "Cedula: " << cedula << endl
		<< "Nombre: " << nombre << endl
		<< "Ocupacion: " << Ocupacion << endl
		<< "Edad: " << edad << endl
		<< "Anios de Experiencia: " << aniosExp << endl
		<< "***************************************" << endl;
	
	return s.str();
	

}

Empleado* Piloto::copia()
{
	return new Piloto(cedula, nombre, Ocupacion, edad, aniosExp);
}
