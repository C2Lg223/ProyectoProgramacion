#include "Administrativa.h"


Administrativa::Administrativa(string tit, string TipAdmi, string ced, string nom, string Ocupaci, int ed)
: titulo(tit), Planta( ced, nom, Ocupaci, ed){}
Administrativa::~Administrativa() {}
void Administrativa::setTitulo(string tit) { titulo = tit; }
string Administrativa::getTitulo() { return titulo; }
string Administrativa::toString(){
	stringstream s;
	s << "Cedula: " << cedula << endl;
	s << "Nombre: " << nombre << endl;
	s << "Ocupacion: " << Ocupacion << endl;
	s << "Edad: " << edad << endl;
	s << " Titulo: " << titulo << endl;

	return s.str();
}
bool Administrativa::EsPiloto() { return false; }