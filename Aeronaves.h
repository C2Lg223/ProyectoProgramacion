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
	double getDistanciaRecorrida();
	virtual string toString() = 0;


	/*string Aeronaves::toString() {
		stringstream s;
		s << "La fecha de creacion de avion es: " << endl;
		if (creacion != NULL)
			s << creacion->toString() << endl;
		s << "La distancia recorrida del avion es: " << distanciaReco << endl;
		return s.str();
	}
	*/


};