#include"Aeropuerto.h"

//ListaAeronave* AeronavesC;
//ListaContratos* ContratosC;
//ListaEmpleado* EmpleadosC;

Aeropuerto::Aeropuerto()
	: nombre(" "), codJuridico(" "), numTelefonico(" ") {
	AeronavesC = new ListaAeronave();
	ContratosC = new ListaContratos();
	EmpleadosC = new ListaEmpleado();
}
Aeropuerto::Aeropuerto(string nom, string codJu, string numTe)
	:nombre(nom), codJuridico(codJu), numTelefonico(numTe) {
}
Aeropuerto::~Aeropuerto() {}

bool Aeropuerto::ingresarAeronave(Aeronaves* av)
{

	if (AeronavesC->ingresar(*av))return true;

	else 
		return false;
}

bool Aeropuerto::ingresarEmpleado(Empleado* em)
{
	if (EmpleadosC->ingresar(*em))
		return true;
	else 
	  return false;
}

bool Aeropuerto::ingresarContrato(Contrato* con)

{
	if (ContratosC->)
	return false;
}
