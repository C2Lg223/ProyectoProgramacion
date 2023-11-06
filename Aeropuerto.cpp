#include"Aeropuerto.h"

Aeropuerto::Aeropuerto()
: nombre (" "), codJuridico(" "), numTelefonico(" ") {
}
Aeropuerto::Aeropuerto(string nom, string codJu, string numTe)
	:nombre(nom), codJuridico(codJu), numTelefonico(numTe) {}
Aeropuerto::~Aeropuerto() {}

bool Aeropuerto::ingresarAeronave()
{
	return false;
}

bool Aeropuerto::ingresarEmpleado()
{

	return false;
}

bool Aeropuerto::ingresarContrato()
{
	return false;
}
