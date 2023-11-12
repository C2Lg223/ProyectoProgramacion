#pragma once
#include"ListaEmpleado.h"
#include"Empleado.h"
#include"ListaAeronave.h"
#include"Comerciales.h"
#include"Carga.h"
#include"Aeropuerto.h"
#include"Controladora.h"




int main() {
	/*string ced;
	Empleado* one = new Piloto("222", "Santiago ", "Piloto principal", 25, 2);
	Empleado* two = new Copiloto("333", "Leo", "CoPiloto de Carga", 20, "2324234");
	Empleado* three = new Azafata("444", "sofia ", "Azafata Aer ", 18, " NorteAmericana");
	Empleado* four = new Administrativa(" Universitario ", " Man", "555", "Mari Cruz ", " Sesd", 23);

	Fecha* creacion = new Fecha(2, 3, 2020);

	Aeronaves* o1 = new Comercial("310", "BIU_ ", " DoblePuerta", *creacion, 23.4);
	//Aeronaves* segunda = new Carga("345")
	ListaEmpleado* conte = new ListaEmpleado();
	ListaAeronave* cont2 = new ListaAeronave();

	conte->ingresar(*one);
	conte->ingresar(*two);
	conte->ingresar(*three);
	conte->ingresar(*four);

	cont2->ingresar(*o1);

	

   cout << " Mostrar informacion " << endl;
	cout << conte->toString();
	cout << " Buscar por cedula " << endl;

	cout << " Mostar avion " << endl;
	cout << cont2->toString();
  */


	Controladora* CO = new Controladora();

	CO->ControlMenuPrincipal();
	return 0;
	


}