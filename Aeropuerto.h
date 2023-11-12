#pragma once
#include"ListaAeronave.h"
#include"ListaContrato.h"
#include"ListaEmpleado.h"

class Aeropuerto {
private:
	string nombre;
	string codJuridico;
	string numTelefonico;
	ListaAeronave* AeronavesC;
	ListaContrato* ContratosC;
	ListaEmpleado* EmpleadosC;


public:
	Aeropuerto();
	Aeropuerto(string, string, string);
	ListaAeronave* getContenedorAeronave();
	ListaContrato* getContenedorContrato();
	ListaEmpleado* getContenedorEmpleados();
	virtual ~Aeropuerto();
	bool ingresarAeronave(Aeronaves*);
	bool ingresarEmpleado(Empleado* );
	bool ingresarContrato(Contrato* );
	bool BusquedaConPorCod(string);
	int contarAeronave();
	void MostrarContratos();
	string MostrarAeronaves();
	bool eliminarEmpleado(string);
	string reporteAeronavesTripulacion();
	void PilotosDeCarga();
	bool hayPilotos();
	bool hayAvionesCarga();
	string MostrarEmpleado();
	string ReporteContratoServicio();
	string ReportePlazoFijo();
	string ReporteTiempoIndefinido();
	string ReporteEmpleadoEnAvComercial(); 
	

};