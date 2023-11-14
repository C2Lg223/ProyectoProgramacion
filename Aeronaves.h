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
	void setPlaca(string);

	Fecha* getFechaCreacion();
	double getDistanciaRecorrida();
	string getPlaca();
	int EdadAviones(Fecha&);

	virtual string toString() = 0;
	virtual bool EsAvionDeCarga() = 0;
	virtual bool EsAvionComercial() = 0;

};