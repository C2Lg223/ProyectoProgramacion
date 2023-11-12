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

	bool listaEmpleadosVacio();
	bool existeEmplSegunCedula(string ced);
	bool existeContratoConEmpleado(string ced);
	Empleado* BuscarPorCed(string);
	bool listaAeronaveVacio();
	string imprimirAeronaves();
	bool existeAvionSegunPlaca(string pla);


	int contarAeronave();
	string MostrarContratos();
	string MostrarAeronaves();
	bool eliminarEmpleado(string);
	string reporteAeronavesTripulacion();
	string PilotosDeCarga();
	
	string MostrarEmpleado();
	string ReporteContratoServicio();
	string ReportePlazoFijo();
	string ReporteTiempoIndefinido();
	string ReporteEmpleadoEnAvComercial();
	string ContratosExcedidos(Fecha&);


	void BuscaEmplConCed(string);
	Aeronaves* BuscarAvionCivil(string);
	

};