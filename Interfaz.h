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
	static int MenuTiposAeronaves();

	//Metodos de Ingreso Empleados 
	static void ingresarPiloto(Aeropuerto* aero);
	static void ingresaCopilotos(Aeropuerto* aero);
	static void ingresaAzafata(Aeropuerto* aero);
	static void ingreasaAdministrativos(Aeropuerto* aero);
	static void ingresaMiscelaneo(Aeropuerto* aero);

	//Metodos de Ingresoa Aeronaves 
	
	static void IngresarAvionComercial(Aeropuerto*);
	static void IngresarAvionesCargas(Aeropuerto* );
	static void IngresaAvionesMilitares(Aeropuerto*);

	//Metodos de Ingreso Contratos 
	static int MenuTiposContratos();
	static void IngresarContratoServicioP(Aeropuerto*);
	static void IngresarPlazoFijo(Aeropuerto* );
	static void ingresoDeContratoDeTiempoIndefinido(Aeropuerto*);



	
	//Segunda opcion del menu principal MANTENIMIENTO
	static int menuMantenimiento();
	static int menuMantEmpleado();//Falta dearrollar esto
	static int menuMantAeronaves();
	static int menuMantContratos();
	static void EliminarEmpleado(Aeropuerto* );
	static void EliminarContrato(Aeropuerto*);
	static void EliminarAeronave(Aeropuerto*);
	// Opcion de editar 
	
	static int menuModificarAeronave();
	static int menuModificarContrato();

	//Metodos que modifican los datos 
    static void ModificarEmple(Aeropuerto*);
	static void ModificarAerona(Aeropuerto*);
	static void ModificarContrato(Aeropuerto*);
	//Tercera opcion del menu principla REPORTES 
	static int menuReportes();
	static void MostrarContratos(Aeropuerto* );
	static void ReportesAeronavesyTripula(Aeropuerto*);
	static void MostrarAeronaves(Aeropuerto*);
	static void ReporteEmpleadoTodos(Aeropuerto*);
	static void Pilotos_AvionesCarga(Aeropuerto*);
	static void ReporteContratoServicio(Aeropuerto*);
	static void ReportaC_PlazoFijo(Aeropuerto*);
	static void ReporteC_TiempoIndefinido(Aeropuerto*);
	static void R_Tripula_AvionComerciales(Aeropuerto*);
	static void R_PlazoFijoExcedidos(Aeropuerto*);
	static void AvionC_MayorAreaAcceso(Aeropuerto*);
	static void AvionesDe20annio(Aeropuerto*);

	//Cuarta opcion del menu principla CONSULTA 
	static int menuConsulta();
	static void BusquedaEmpleado(Aeropuerto*);
	static void BusquedaContrato(Aeropuerto*);
	static void AvionesCiviles(Aeropuerto*);





	//Mensajes 
	static void menjDefault();
	static void  msjExito();
	static void msjErrorNoHayContratoVencidos();
	static void msjErrorElCodigoDeLaPlazaEXISTE();
	static void msjErrorNoExisteContrato();
	static void  msjNoEsPlazoFijo();

	

};








