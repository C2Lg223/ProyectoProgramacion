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


