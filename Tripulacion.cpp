#include "Tripulacion.h"

Tripulacion::Tripulacion() :Empleado()
{
	nave = nullptr;
}

Tripulacion::Tripulacion(string ced, string nom, string ocu, int ed, Aeronaves& av) : Empleado(ced, nom, ocu, ed), nave((Aeronaves*)&av) {}

Tripulacion::~Tripulacion()
{
}

void Tripulacion::setAvion(Aeronaves& av) {
	nave = (Aeronaves*)&av;
}

Aeronaves* Tripulacion::getAvion()
{
	return nave;
}