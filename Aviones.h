#pragma once
#include<iostream>
#include<sstream>
#include"Fecha.h"
using namespace std;

class Aviones {
  protected:
	Fecha* creacion;
	double distanciaReco;


  public:
	 Aviones(Fecha& crea, double disRe);;
	virtual ~Aviones();
	void setDistanciaRecorida(double dr);
	double getDistanciaRecorrida();
	virtual string toString() = 0;


};