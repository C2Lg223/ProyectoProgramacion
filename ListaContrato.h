#pragma once
#include"NodoContratos.h"


class ListaContrato{
private:
	NodoContrato* ppio;
public:
	ListaContrato ();
	virtual ~ListaContrato ();
	bool listaContratosestaVacia();
	bool ingresar(Contrato&);
	string toString();
	string reporteAeronaveconTripulacion(); 
	string ReporteContratoServicio();
	string ReportePlazoFijo();
	string ReporteTiempoIndefinido();
	string ReportePilotoAvCarga();
	string EmpleadosDeAvionesComerciales();
	bool existeContratoLigadoAEmpleado(string ced);
	string ContratosPlazoFijExcedidos(Fecha& Actual);
	void BuscaEmplConCed(string );
	bool existeContradoPorCod(string);
	Contrato* MostrarPorCod(string cod);

	bool existeContratosExcedido(Fecha&);
	bool EliminarEmpleado(string);
	bool eliminarContrato(string);
	//bool eliminarAeronaves(string);


};