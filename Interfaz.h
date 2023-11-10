#pragma once
#include<iostream>
#include<sstream>
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
	

	//Metodos de Ingreso Empleados 
	static void DatosEmpleado();
	static void ingresarPiloto(Aeropuerto* aero);
	static void ingresaCopilotos(Aeropuerto* aero);
	static void ingresaAzafata(Aeropuerto* aero);
	static void ingreasaAdministrativos(Aeropuerto* aero);
	static void ingresaMiscelaneo(Aeropuerto* aero);

	//Metodos de Ingresoa Aeronaves 

	static int MenuTiposAeronaves();
	static void IngresarAvionComercial(Aeropuerto*);
	static void IngresarAvionesCargas(Aeropuerto* );
	static void IngresaAvionesMilitares(Aeropuerto*);



	
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


};








