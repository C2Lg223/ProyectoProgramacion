#include"ListaAeronave.h"
#include"ListaContrato.h"
#include"ListaEmpleado.h"

class Aeropuerto {
private:
	string nombre;
	string codJuridico;
	string numTelefonico;
	ListaAeronave* AeronavesC;
	ListaContratos* ContratosC;
	ListaEmpleado* EmpleadosC;


public:
	Aeropuerto();
	Aeropuerto(string, string, string);
	virtual ~Aeropuerto();
	bool ingresarAeronave(Aeronaves* av);
	bool ingresarEmpleado(Empleado* em);
	bool ingresaContrato(Contrato* cont);
	string DatosAeropuerto();

};