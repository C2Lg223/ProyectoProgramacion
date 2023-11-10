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

public: 
	Contrato();
	Contrato( string, string, int);
	virtual ~Contrato();
	//----------Metodos Set-----------------
	void setCodigo(string);
	void setPuesto(string);
	void setSalario(int);
	
	//-------Metodos get-----------------------
	string getCodigo();
	string getPuesto();
	int getSalario();
	virtual string toString() = 0;
};