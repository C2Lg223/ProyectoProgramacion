#include "Interfaz.h"

int Interfaz::menuPrincipal()
{
	int opc;
	system("cls");
	cout << "**************************** AEROPUERTO MENU ******************************" << endl;
	cout << "(1). Ingresar" << endl;
	cout << "(2). Mantenimiento " << endl;
	cout << "(3). Reportes" << endl;
	cout << "(4). Consulta" << endl;
	cout << "(5). Salir" << endl;
	cout << "********Digitar una opcion********" << endl;
	cin >> opc;
	return opc;
}

int Interfaz::menuIngresos()
{
	int opc;
	system("cls");
	cout << "**************************** INGRESAR ******************************" << endl;
	cout << "(1). Empleado" << endl;
	cout << "(2). Avion " << endl;
	cout << "(3). Contrato " << endl;
	cout << "(4). Atras" << endl;
	cout << "********Digitar una opcion********" << endl;
	cin >> opc;
	return opc;
}
int Interfaz::menuIngresoEmpleados()
{
	int opc;
	system("cls");
	cout << "**************************** INGRESAR EMPLEADO ******************************" << endl;
	cout << "(1). Piloto" << endl;
	cout << "(2). Copiloto " << endl;
	cout << "(3). Azafata " << endl;
	cout << "(4). Administrativos " << endl;
	cout << "(5). Miscelaneo" << endl;
	cout << "********Digitar una opcion********" << endl;
	cin >> opc;
	return opc;
}
int Interfaz::menuMantenimiento() {
	int opc;
	system("cls");
	cout << "***********************  MANTENIMIENTO ******************************" << endl;
	cout << " 1) Empleado " << endl;
	cout << " 2) Aeronaves " << endl;
	cout << " 3) Contratos " << endl;
	cout << " 4) Atras " << endl;
	cout << "Digitar una opcion: " << endl;
	cin >> opc;
	return opc;
}

int Interfaz::menuMantEmpleado() {
	int opc;
	system("cls");
	cout << "2.Mantenimiento                               2.1 Empleados " << endl << endl;
	cout << " 1) Eliminar Empleado " << endl;
	cout << " 2) Modificar Datos " << endl;
	cout << "Digitar una opcion: " << endl;
	cin >> opc;
	return opc;

}
int Interfaz::menuMantAeronaves() {
	int opc;
	system("cls");
	cout << "2.Mantenimiento                               2.2 Aeronaves " << endl << endl;
	cout << " 1) Eliminar Aeronave " << endl;
	cout << " 2) Modificar Datos " << endl;
	cout << "Digitar una opcion: " << endl;
	cin >> opc;
	return opc;

}

int Interfaz::menuMantContratos() {
	int opc;
	system("cls");
	cout << "2.Mantenimiento                               2.3 Contratos  " << endl << endl;
	cout << " 1) Eliminar Contrato " << endl;
	cout << " 2) Modificar Datos " << endl;
	cout << "Digitar una opcion: " << endl;
	cin >> opc;
	return opc;

}



int Interfaz::menuReportes() {
	int opc;

	system("cls");
	cout << " <=><=><=><=><=><=><=><=><=><=><=><=><=><=><=><=><=><=><=><=><=>" << endl;
	cout << "                     3. REPORTES                                " << endl;
	cout << "  1.  Contratos con sus empleados " << endl;
	cout << "  2.  Aeronaves con su tripulación.  " << endl;
	cout << "  3.  Todas las Aeronaves " << endl;
	cout << "  4.  Pilotos de Aviones de Carga " << endl;
	cout << "  5.  Aviones con mas de 20 annios" << endl;
	cout << "  6.  Contratos de Servicios Profesionales " << endl;
	cout << "  7.  Contratos de Plazo Fijo " << endl;
	cout << "  8.  Contratos de Tiempo Indefinido" << endl;
	cout << "  9.  Tripulaciones de Aviones Comerciales " << endl;
	cout << " 10.  Contratos de Plazo Fijo excedidos " << endl;
	cout << " 11.  Avion de Carga con mayor area de acceso " << endl;
	cout << " 12.  Menu Anterior " << endl;
	cout << endl << endl;
	cout << " <=><=><=><=><=><=><=><=><=><=><=><=><=><=><=><=><=><=><=><=><=>" << endl;

	cout << "Digitar una opcion: " << endl;
	cin >> opc;
	return opc;

}

//MENU CONSULTAS 
int Interfaz::menuConsulta() {
	int opc;

	system("cls");
	cout << " ========================================================================" << endl;
	cout << "                      CONSULTA " << endl << endl;
	cout << "                 1. Empleado " << endl;
	cout << "                 2. Contrato " << endl;
	cout << "                 3. Aeronave " << endl;
	cout << "                 4. Atras " << endl;
	cout << " ========================================================================" << endl;

	cout << "Digitar una opcion: " << endl;
	cin >> opc;
	return opc;

}

void Interfaz::ingresarPiloto(Aeropuerto* aero){
	Empleado* p = NULL;
	string ced, nom, ocu;
	int ed, aE;

	system("cls");
	cout << "-----------------INGRESAR UN PILOTO-----------------" << endl;
	cout << "Digite Cedula: " << endl;
	cin >> ced;
	cout << "Digite Nombre: " << endl;
	cin >> nom;
	cout << "Digite la Ocupacion: " << endl;
	cin >> ocu;
	cout << "Digite la Edad: " << endl;
	cin >> ed;
	cout << "Digite los Anios de Experiencia: " << endl;
	cin >> aE;
	cout << endl;

	p = new Piloto(ced, nom, ocu, ed, aE);
	aero->ingresarEmpleado(*p);

}


