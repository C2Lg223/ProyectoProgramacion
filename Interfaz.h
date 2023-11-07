#pragma once
#include<iostream>
#include"Aeropuerto.h"
using namespace std;

class Interfaz {
public:
	static int menuPrincipal();
	static int menuIngresos();
	static int menuIngresoEmpleados();
	static int menuIngresoAeronaves();

	static int ingresarPiloto(Aeropuerto* per);
	static int ingresaCopilotos(Aeropuerto* per);
	static int ingresaAzafata(Aeropuerto* per);
	static int ingreasaAdministrativos(Aeropuerto* per);
	static int ingresaMiscelaneo(Aeropuerto* per);

};








