#pragma once
#include"Planta.h"

class Miscelaneos : public Planta {
  private:
	int gradEscolaridad;
	string LugarLabor;
 public: 
	 Miscelaneos(int , string, string, string, string, int);
	 virtual~Miscelaneos();
	 void setGradoEscolaridad(int Escolaridad);
	 void setTipoLabor(string Labor);
	 int getGradoEscolaridad();
	 string getTipoLabor();
	 string toString();

};
