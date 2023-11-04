#include "Copiloto.h"

Copiloto::Copiloto(){
	telefono = "0000 0000";
}

Copiloto::Copiloto(string ced, string nom, string ocu, int ed, Aeronaves& av, string tel):Tripulacion(ced, nom, ocu, ed, av), telefono(tel){}

Copiloto::~Copiloto()
{
}

void Copiloto::setTelefono(string tel){
	telefono = tel;
}

string Copiloto::getTelefono(){
	return telefono;
}

string Copiloto::toString(){
	stringstream s;
	s << "------Informacion del Copiloto------" << endl
		<< "Cedula: " << cedula << endl
		<< "Nombre: " << nombre << endl
		<< "Ocupacion: " << Ocupacion << endl
		<< "Edad: " << edad << endl
		<< "Numero de Telefono: " << telefono << endl;
	if (getAvion() != nullptr) {
		s << "------Avion Correspondiente------" << endl
			<< getAvion()->toString() << endl;
	}
	return s.str();

}


