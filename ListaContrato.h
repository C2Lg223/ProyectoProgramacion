#pragma once
#include"NodoContratos.h"


class ListaContrato{
private:
	NodoContrato* ppio;
public:
	ListaContrato ();
	virtual ~ListaContrato ();
	bool estaVacia();
	bool ingresar(Contrato&);
	string toString();
	Contrato* busquedaPorCod(string cod);
	string reporteAeronaveconTripulacion(); 
	string ReporteContratoServicio();
	string ReportePlazoFijo();
	string ReporteTiempoIndefinido();
	string ReportePilotoAvCarga();
	string EmpleadosDeAvionesComerciales();
	bool existeContratoLigadoAEmpleado(string ced);
	string ContratosPlazoFijExcedidos(Fecha& Actual);
	void BuscaEmplConCed(string );

	bool EliminarEmpleado(string ced);


};