#pragma once
#include<iostream>
#include<sstream>
#include"Fecha.h"
using namespace std;

class Aeronaves {
  protected:
	Fecha* creacion;
	double distanciaReco;
	string Placa;

  public:
	Aeronaves(Fecha& crea, double disRe, string);;
	virtual ~Aeronaves();
	void setDistanciaRecorida(double dr);
	void setFechaCreacion(Fecha&);
	void setPlaca(string);

	Fecha* getFechaCreacion();
	double getDistanciaRecorrida();
	string getPlaca();

	virtual string toString() = 0;
	virtual bool EsAvionDeCarga() = 0;
	virtual bool EsAvionComercial() = 0;

};