#pragma once
#include<iostream>
#include<sstream>
#include"Fecha.h"
using namespace std;

class Contrato {
   protected: 
	   string codigo;
	   string Puesto;
	   int salario;
	   Fecha* ingresaTrabajar;
	   Fecha* FinalizaTrabajo;

public: 
	Contrato();
	Contrato( string, string, int, Fecha&, Fecha&);
	virtual ~Contrato();
	//----------Metodos Set-----------------
	void setCodigo(string);
	void setPuesto(string);
	void setSalario(int);
	void setFechaInicia(Fecha&);
	void setFechaFinaliza(Fecha&);
	//-------Metodos get-----------------------
	string getCodigo();
	string getPuesto();
	int getSalario();
	Fecha* getFechaInicio();
	Fecha* getFechaFinaliza();
	virtual string toString() = 0;
};