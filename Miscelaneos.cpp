#pragma once
#include "Miscelaneos.h"

Miscelaneos::Miscelaneos(int Escolaridad, string Labor, string ced, string nom, string Ocupaci, int ed, string TipoArea)
	:gradEscolaridad(Escolaridad), tipoLabor(Labor), Planta(TipoArea, ced, nom, Ocupaci, ed) {}

Miscelaneos::~Miscelaneos() {}

void Miscelaneos::setGradoEscolaridad(int Escolaridad) { gradEscolaridad = Escolaridad; }

void Miscelaneos::setTipoLabor(string Labor) { tipoLabor = Labor; }

int Miscelaneos::getGradoEscolaridad() { return gradEscolaridad; }

string Miscelaneos::getTipoLabor() { return tipoLabor; }

string Miscelaneos::ToString() {
	stringstream s;
	s << " Cedula: " << cedula << endl;
	s << " Nombre: " << nombre << endl;
	s << " Ocupacion: " << Ocupacion << endl;
	s << " Edad: " << edad << endl;
	s << " Area: " << tipoLabor << endl;
	s << " Grado de Escolaridad: " << gradEscolaridad << endl;
	s << " Labor: " << tipoLabor << endl;
	return s.str();

}
