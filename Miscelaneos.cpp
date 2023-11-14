#pragma once
#include "Miscelaneos.h"

Miscelaneos::Miscelaneos(int Escolaridad, string Labor, string ced, string nom, string Ocupaci, int ed)
	:gradEscolaridad(Escolaridad), LugarLabor(Labor), Planta(ced, nom, Ocupaci, ed) {}

Miscelaneos::~Miscelaneos() {}

void Miscelaneos::setGradoEscolaridad(int Escolaridad) { gradEscolaridad = Escolaridad; }

void Miscelaneos::setTipoLabor(string Labor) { LugarLabor = Labor; }

int Miscelaneos::getGradoEscolaridad() { return gradEscolaridad; }

string Miscelaneos::getTipoLabor() { return LugarLabor; }

string Miscelaneos::toString() {
	stringstream s;
	s << " Cedula: " << cedula << endl;
	s << " Nombre: " << nombre << endl;
	s << " Ocupacion: " << Ocupacion << endl;
	s << " Edad: " << edad << endl;
	s << " Area de Labor : " << LugarLabor << endl;
	s << " Grado de Escolaridad: " << gradEscolaridad << endl;
	return s.str();

}
bool Miscelaneos::EsPiloto() { return false; }

bool Miscelaneos::EsAdministrativa() { return false; }
bool Miscelaneos::EsMicelaneos() { return true; }