#pragma once
#include"Empleado.h"

class Planta: public Empleado {


   public:
	 Planta(string, string, string, int);
	 virtual~Planta();
	 virtual string toString() = 0;
	 virtual bool EsPiloto() = 0;
	 virtual  bool EsAdministrativa() = 0;
	 virtual  bool EsMicelaneos() = 0;

};
