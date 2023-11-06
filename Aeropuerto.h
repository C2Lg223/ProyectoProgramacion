#include"ListaAeronave.h"
#include"ListaContratos.h"
#include"ListaEmpleado.h"

class Aeropuerto {
private: 
	string nomb; 
	string codigoJuridico;
	string numTelefonico;
	Aeronaves* es;
	Contrato* con;
	Empleado* emple;


public:
	Aeropuerto();
	Aeropuerto(string, string, string, Aeronaves&, Contrato&, Empleado&);
	virtual ~Aeropuerto();

};