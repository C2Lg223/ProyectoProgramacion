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
	bool existeContratoLigadoAEmpleado(string ced);
	string reporteAeronaveconTripulacion(); 
	string ReporteContratoServicio();
	string ReportePlazoFijo();
	string ReporteTiempoIndefinido();
	string ReportePilotoAvCarga();
};