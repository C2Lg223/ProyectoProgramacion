#pragma once
#include"Empleado.h"

class Planta: public Empleado {
  protected:
	  string TipoArea;

 public:
	 Planta();
	 Planta(string, string, string, string, int);
	 virtual~Planta();
	 void setTipoArea(string TipArea);
	 virtual string toString() = 0;

};
