#pragma once
#include"ListaAeronave.h"
#include"ListaContrato.h"
#include"ListaEmpleado.h"
#include<sstream>
#include<iostream>

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
	string imprimirComerciales();
	bool existeAvionSegunPlaca(string pla);
	Aeronaves* buscarAvPorPlaca(string pla);
	bool existeAvCivilSegunPlaca(string pla);
	bool existeAvComeercialSegunPlaca(string pla);
	bool existeComercial();
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