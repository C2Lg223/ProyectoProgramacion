#include"Copiloto.h"


Copiloto::Copiloto(string ced, string nom, string ocu, int ed, string tel) :Tripulacion(ced, nom, ocu, ed), telefono(tel) {}

Copiloto::~Copiloto()
{
}

void Copiloto::setTelefono(string tel) {
	telefono = tel;
}

string Copiloto::getTelefono() {
	return telefono;
}

string Copiloto::toString() {
	stringstream s;
	s << "*******Informacion del Copiloto*******" << endl
		<< "Cedula: " << cedula << endl
		<< "Nombre: " << nombre << endl
		<< "Ocupacion: " << Ocupacion << endl
		<< "Edad: " << edad << endl
		<< "Numero de Telefono: " << telefono << endl
		<< "***********************************";
	return s.str();

}
bool Copiloto::EsPiloto() { return false; }






