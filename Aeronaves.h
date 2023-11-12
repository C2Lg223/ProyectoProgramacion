#pragma once
#include<iostream>
#include<sstream>
#include"Fecha.h"
using namespace std;

class Aeronaves {
  protected:
	Fecha* creacion;
	double distanciaReco;
	string placa;


  public:
	Aeronaves(Fecha& crea, double disRe, string pla);
	virtual ~Aeronaves();
	void setDistanciaRecorida(double dr);
	void setFechaCreacion(Fecha&);

	Fecha* getFechaCreacion();
	double getDistanciaRecorrida();
	string getPlaca();

	virtual string toString() = 0;

};