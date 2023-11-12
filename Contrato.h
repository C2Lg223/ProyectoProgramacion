#pragma once
#include"Empleado.h"
#include"Aeronaves.h"
#include"Fecha.h"
using namespace std;

class Contrato {
   protected: 
	   string codigo;
	   string Puesto;
	   int salario;
	   Empleado* emple;
	   Aeronaves* avion; 
	   Fecha* ingresaTrabajar;
	   Fecha* FinalizaTrabajo; 

public: 
	Contrato(string, string, int, Fecha&, Fecha&, Empleado&);
	Contrato(string, string, int, Fecha&, Fecha&, Empleado&, Aeronaves&);
	virtual ~Contrato();
	//----------Metodos Set-----------------
	void setCodigo(string);
	void setPuesto(string);
	void setSalario(int);
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
	int getSalario();
	void desvincularAeronave();
	virtual bool EstaExcedido(Fecha&) = 0;
	virtual string toString() = 0;
};