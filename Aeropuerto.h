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
	Contrato* BusquedaCodContrato(string);
	
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
	bool existeContratoPorCod(string cod);
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
	bool existeContratoExcedido(Fecha&);
	bool eliminarContratoPorCod(string cod);
	Aeronaves* BuscarAvion(string Placa);

	bool listaEmpleadoVacia();
	bool listaContratovacia();
	string AvionesDe20annios(Fecha& actual);

	

};