#pragma once
#include"ListaAeronave.h"
#include"ListaContratos.h"
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
	bool ingresarAeronave(Aeronaves*);
	bool ingresarEmpleado(Empleado* );
	bool ingresarContrato(Contrato* );
	bool BuscarPorCed(string);
	

};