#pragma once
#include"Contrato.h"
#include"Plaza.h"

class TiempoIndefinido : public Contrato {
 private: 
	 Plaza* nPlaza;

public: 
	TiempoIndefinido(Plaza&, string, string, int, Fecha&, Fecha&);
	virtual ~TiempoIndefinido();
	void setPlazaC(Plaza&);
	Plaza* getPlazaC();
	string toString();


};