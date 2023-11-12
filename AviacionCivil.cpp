#pragma once
#include"AviacionCivil.h"

AviacionCivil::AviacionCivil( string TpAvion, Fecha& crea, double disRe, string pla)
	: tipoAvion(TpAvion), Aeronaves(crea, disRe, pla) {}
void AviacionCivil::setTipoAvion(string TipAV) { tipoAvion = TipAV; }
string AviacionCivil::getTipoAvion() { return tipoAvion; }
AviacionCivil::~AviacionCivil() {}
