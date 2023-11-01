#pragma once
#include"AviacionCivil.h"

AviacionCivil::AviacionCivil(string pla, string TpAvion, Fecha& crea, double disRe)
	:placa(pla), tipoAvion(TpAvion), Aeronaves(crea, disRe) {}

AviacionCivil::~AviacionCivil() {}
