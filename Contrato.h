#pragma once
#include"Empleado.h"
#include"Aeronaves.h"
#include"Fecha.h"
using namespace std;

class Contrato {
   protected: 
	   string codigo;
	   string Puesto;
	   double salario;
	   Empleado* emple;
	   Aeronaves* avion; 
	   Fecha* ingresaTrabajar;
	   Fecha* FinalizaTrabajo; 

public: 
	Contrato(string, string, double, Fecha&, Fecha&, Empleado&);
	Contrato(string, string, double, Fecha&, Fecha&, Empleado&, Aeronaves&);
	//Constructor para tiempo indefinido sin fecha de finalizacion 
	Contrato(string, string, double, Fecha&, Empleado&);
	Contrato(string, string, double, Fecha&, Empleado&, Aeronaves&);

	virtual ~Contrato();
	//----------Metodos Set-----------------
	void setCodigo(string);
	void setPuesto(string);
	void setSalario(double);
	void setEmpleado(Empleado&);
	void setAeronave(Aeronaves&);
	void setFechaInicia(Fecha&);
	void setFechaFinaliza(Fecha&);
	
	//-------Metodos get-----------------------
	string getCodigo();
	string getPuesto();
	Empleado* getEmpleado();
	Aeronaves* getAviones();
	Fecha* getIniciaaTrabajar();
	Fecha* getFinalizaTrabajo();
	double getSalario();
	//Metodos 
	void desvincularAeronave();

	//metodos con virtual
	virtual bool ContratoExcedido(Fecha&) = 0;
	virtual string toString() = 0;
	virtual bool EsPlazoFijo() = 0;
	
};