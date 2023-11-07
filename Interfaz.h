#pragma once
#include<iostream>
#include"Aeropuerto.h"
using namespace std;

class Interfaz {
public:
	//Menus 

	static int menuPrincipal();
	//Menu Ingresos 
	static int menuIngresos();
	static int menuIngresoEmpleados();
	static int menuIngresoAeronaves();
	//Segunda opcion del menu principal MANTENIMIENTO
	static int menuMantenimiento();
	static int menuMantEmpleado();
	static int menuMantAeronaves();
	static int menuMantContratos();
	//Tercera opcion del menu principla REPORTES 
	static int menuReportes();




	//Cuarta opcion del menu principla CONSULTA 
	static int menuConsulta();

	static int DatosEmpleado();
	static int ingresarPiloto(Aeropuerto* per);
	static int ingresaCopilotos(Aeropuerto* per);
	static int ingresaAzafata(Aeropuerto* per);
	static int ingreasaAdministrativos(Aeropuerto* per);
	static int ingresaMiscelaneo(Aeropuerto* per);

};








