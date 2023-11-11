#pragma once
#include"Interfaz.h"


class Controladora {

private:
	Aeropuerto* aeropuert;


public: 
	Controladora() {
		one = new Aeropuerto();
	}

	virtual ~Controladora() {
		if (one != NULL) delete one;
	}


	//Menu Principal 

	void ControlMenuPrincipal (){
		int opc;
		do {
			opc = ControlMenuP ();

			switch (opc) {
			case 1:




			default:
				break;
			}




		} while (opc != 4);



	}

	int ControlMenuP() {
		return Interfaz::menuPrincipal();
	}

	void ControlMenuIngresos() {
		int opc, opc2;

		
		do {
			opc = ControlIngresos();
			switch (opc) {
			case 1:



				default:
					break;
				}
	    }while (opc != 4);

	}

	int ControlIngresos() { return Interfaz::menuIngresos(); }



	void ControlIngresosAeronaves() {
		int opc2;
		do {
			opc2 = ControIngreOpc1();
			switch (opc2) {
			 case 1:
				 Interfaz::IngresarAvionComercial();
			 case 2: ControlAvionCarga(); break;
			 case 3: 
				 Interfaz::IngresaAvionesMilitares();
			default:
				break;
			}

		} while (opc2 != 4);

	}
	int ControIngreOpc1() { return Interfaz::MenuTiposAeronaves(); }
	void ControlAvionComercial() { return Interfaz::IngresarAvionComercial(aeropuert); }
	void ControlAvionCarga() {return Interfaz::IngresarAvionesCargas(aeropuert);}
	void ControlAvionMilitar() { return Interfaz::IngresaAvionesMilitares(aeropuert); }

	

	

	




	
	




























     




};
