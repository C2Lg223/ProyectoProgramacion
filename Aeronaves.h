#pragma once
#include<iostream>
#include<sstream>
#include"Fecha.h"
using namespace std;

class Aeronaves {
  protected:
	Fecha* creacion;
	double distanciaReco;


  public:
	Aeronaves(Fecha& crea, double disRe);;
	virtual ~Aeronaves();
	void setDistanciaRecorida(double dr);
	void setFechaCreacion(Fecha&);

	Fecha* getFechaCreacion();
	double getDistanciaRecorrida();

	virtual string toString() = 0;

};