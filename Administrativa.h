#pragma once
#include"Planta.h"


class Administrativa : public Planta {
private:
	string titulo;
public:
	Administrativa(string, string, string, string, string, int);
	virtual~Administrativa();
	void setTitulo(string);
	string getTitulo();
	string toString(); 
	bool EsPiloto();
	bool EsAdministrativa();
	bool EsMicelaneos();

};