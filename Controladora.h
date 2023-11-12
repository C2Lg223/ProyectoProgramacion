#pragma once
#include"Interfaz.h"


class Controladora {

private:
	Aeropuerto* aeropuert;


public:
	Controladora() {
		aeropuert = new Aeropuerto();
	}

	virtual ~Controladora() {
		if (aeropuert != NULL) delete aeropuert;
	}


	//Menu Principal 

	void ControlMenuPrincipal() {
		int opc;
		do {
			opc = ControlMenuP();

			switch (opc) {
			case 1:ControlMenuIngresos(); break;
			case 2:ControlMenuMantenimiento(); break;
			case 3:ControlReportes(); break;
			case 4: ControConsulta(); break;




			default:
				MensajeDefault(); break;
			}




		} while (opc != 5);



	}

	int ControlMenuP() {
		return Interfaz::menuPrincipal();
	}


	//********************************************* MENU INGRESOS ***************************************************
	void ControlMenuIngresos() {
		int opc;


		do {
			opc = ControlIngresos();
			switch (opc) {
			case 1:ControlIngresosAeronaves(); break;
			case 2:ControlIngresosEmpleados(); break;
			case 3:ControlIngresosContratos(); break;
			default:
				MensajeDefault(); break;
			}
		} while (opc != 4);

	}

	int ControlIngresos() { return Interfaz::menuIngresos(); }



	void ControlIngresosAeronaves() {
		int opc2;
		do {
			opc2 = ControIngreOpc1();
			switch (opc2) {
			case 1:ControlAvionComercial(); break;
			case 2:ControlAvionCarga(); break;
			case 3:ControlAvionMilitar(); break;
			default:
				break;
			}

		} while (opc2 != 4);

	}
	int ControIngreOpc1() { return Interfaz::MenuTiposAeronaves(); }
	void ControlAvionComercial() { return Interfaz::IngresarAvionComercial(aeropuert); }
	void ControlAvionCarga() { return Interfaz::IngresarAvionesCargas(aeropuert); }
	void ControlAvionMilitar() { return Interfaz::IngresaAvionesMilitares(aeropuert); }

	void ControlIngresosEmpleados() {
		int opc;
		do {
			opc = ControlIngreOpc2();
			switch (opc) {
			case 1: ControlEmpPiloto();   break;
			case 2: ControlEmpCopiloto(); break;
			case 3: ControlEmpAzafata();  break;
			case 4: ControlEmpAdmi();     break;
			case 5: ControlEmpMicela();   break;
			default:
				MensajeDefault();
				break;
			}


		} while (opc != 6);
	}

	int ControlIngreOpc2() { return Interfaz::menuIngresoEmpleados(); }
	void ControlEmpPiloto() { return Interfaz::ingresarPiloto(aeropuert); }
	void ControlEmpCopiloto() { return Interfaz::ingresaCopilotos(aeropuert); }
	void ControlEmpAzafata() { return Interfaz::ingresaAzafata(aeropuert); }
	void ControlEmpAdmi() { return Interfaz::ingreasaAdministrativos(aeropuert); }
	void ControlEmpMicela() { return Interfaz::ingresaMiscelaneo(aeropuert); }
	void MensajeDefault() { return Interfaz::menjDefault(); }

	void ControlIngresosContratos() {
		int opc;
		do {
			opc = ControlIngreOpc3();
			switch (opc) {
			case 1:ControlServicioContrato(); break;
			case 2:ControlPlazoFijo(); break;
			case 3:ControlTiempoInde(); break;
			default:
				MensajeDefault();
				break;
			}

		} while (opc != 4);
	}

	int ControlIngreOpc3() { return Interfaz::MenuTiposContratos(); }
	void ControlServicioContrato() { return Interfaz::IngresarContratoServicioP(aeropuert); }
	void ControlPlazoFijo() { return Interfaz::IngresarPlazoFijo(aeropuert); }
	void ControlTiempoInde() { return Interfaz::IngresarTiempoIndefinido(aeropuert); }

	//********************************************* MENU INGRESOS ***************************************************



	//=================================================================================================================
	//  Mantenimiento 

	void ControlMenuMantenimiento() {
		int opc;

		do {
			opc = ControlMantenimiento();
			switch (opc) {
			case 1: MenuMantEmpleado(); break;
			case 2: MenuMantAer(); break;
			case 3: MenuMantContrato(); break;


			default:
				MensajeDefault();
				break;
			}





		} while (opc != 4);
	}

	int ControlMantenimiento() { return Interfaz::menuMantenimiento(); }


	void MenuMantEmpleado() {
		int opc;
		do {
			opc = MenuMantEmpleados();
			switch (opc) {
			case 1:EliminarEmpleado(); break;
			case 2:ModificaEmpleado(); break;
			default:
				MensajeDefault();
				break;
			}


		} while (opc != 3);
	}
	int  MenuMantEmpleados() { return Interfaz::menuMantEmpleado(); }
	void EliminarEmpleado() { return Interfaz::EliminarEmpleado(aeropuert); }
	void ModificaEmpleado() { return Interfaz::ModificarEmple(aeropuert); }

	void MenuMantAeronaves() {
		int opc;
			opc = MenuMantAer();
			switch (opc){
			case 1: ModificarAer(); break;

			default:
				break;
			}
	}
	int MenuMantAer() { return Interfaz::menuMantAeronaves(); }
	void ModificarAer() { return Interfaz::ModificarAerona(aeropuert); }





	void MenuMantContrato() {
		int opc;
		
			opc = ControlMantenimiento();
			if (opc == 1) {
			    ModificarContrato();
			}
			

	}

	int ControManteContrato() { return Interfaz::menuMantContratos(); }
	void ModificarContrato() { return Interfaz::ModificarContrato(aeropuert); }
	
	//*************************************************************************************************
	//    REPORTE 

	void ControlReportes() {
		int opc;
		do {

			opc = ControlMenuReportes();
			switch (opc){
			case 1:  R_ContratoEmp(); break;
			case 2:  R_ContratoEmp(); break;
			case 3:  R_AeronaveTripu(); break;
			case 4:  R_Aeronaves()    ; break;
			case 5:  R_Empleados()    ; break;
			case 6:  R_PilotosA_Carga(); break;
			case 7:  R_ContratoServicio(); break;
			case 8:  R_PlazoFijo(); break;
			case 9:  R_TiempoInd(); break;
			case 10: R_TripAvionComercial(); break;
			case 11: R_PlazoFijoEx(); break;
			case 12: R_AvMayorAcceso(); break;

			default:
				MensajeDefault();
				break;
			}






		} while (opc != 12);
	}

	int ControlMenuReportes() { return Interfaz::menuReportes (); }
	void R_ContratoEmp() { return Interfaz::MostrarContratos(aeropuert); }
	void R_AeronaveTripu() { return Interfaz::ReportesAeronavesyTripula(aeropuert); }
	void R_Aeronaves() { return Interfaz::MostrarAeronaves(aeropuert);}
	void R_Empleados() {return Interfaz::ReporteEmpleadoTodos(aeropuert);}
	void R_PilotosA_Carga() { return Interfaz::Pilotos_AvionesCarga(aeropuert); }
	void R_ContratoServicio() { return Interfaz::ReporteContratoServicio(aeropuert); }

	void R_PlazoFijo() { return Interfaz::ReportaC_PlazoFijo(aeropuert); }
	void R_TiempoInd() { return Interfaz::ReporteC_TiempoIndefinido(aeropuert); }
	void R_TripAvionComercial() { return Interfaz::R_Tripula_AvionComerciales(aeropuert); }
	void R_PlazoFijoEx() { return Interfaz::R_PlazoFijoExcedidos(aeropuert); }
	void R_AvMayorAcceso() { return Interfaz::AvionC_MayorAreaAcceso(aeropuert); }


	//*************************************************************************************************

	void ControlMenuConsulta() {
		int opc;
		do {
			opc = ControConsulta();
			switch (opc){
			case 1: ConsultaEmpleado(); break;
			case 2: ConsultaContrato(); break;
			case 3:ConsultaAeronaveCivil(); break;
			default:
				MensajeDefault();
				break;
			}

		} while (opc != 3);
	}

	int ControConsulta() { return Interfaz::menuConsulta(); }
	void ConsultaEmpleado() { return Interfaz::BusquedaEmpleado(aeropuert); }
	void ConsultaContrato() { return Interfaz::BusquedaContrato(aeropuert); }
	void ConsultaAeronaveCivil() { return Interfaz::AvionesCiviles(aeropuert); }
	
	




























     




};
