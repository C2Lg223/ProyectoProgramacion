#pragma once
#include"Fecha.h"


Fecha::Fecha() : dia(0), mes(0), annio(0) {}
Fecha::Fecha(int d, int m, int a) : dia(d), mes(m), annio(a) {}
Fecha::~Fecha() {}
void Fecha::setDia(int d) { dia = d; }
void Fecha::setMes(int me) { mes = me; }
void Fecha::setAnnio(int a) { annio = a; }
int Fecha::getDia() { return dia; }
int Fecha::getMes() { return mes; }
int Fecha::getAnnio() { return annio; }

string Fecha::toString() {
	stringstream s;
	s << " Dia: " << dia << " \n mes: " << mes << " Año: " << annio << endl;
	return s.str();

}