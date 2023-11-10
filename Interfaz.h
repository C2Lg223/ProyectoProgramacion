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
	// Opcion de editar 
	static int menuModificarEmple();
	//Tercera opcion del menu principla REPORTES 
	static int menuReportes();




	//Cuarta opcion del menu principla CONSULTA 
	static int menuConsulta();

	//Metodos de Ingreso
	static void DatosEmpleado();
	static void ingresarPiloto(Aeropuerto* aero);
	static void ingresaCopilotos(Aeropuerto* aero);
	static void ingresaAzafata(Aeropuerto* aero);
	static void ingreasaAdministrativos(Aeropuerto* aero);
	static void ingresaMiscelaneo(Aeropuerto* aero);

	
	


};








