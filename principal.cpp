#include"ListaEmpleado.h"
#include"Empleado.h"


int main() {
	string ced;
	Empleado* one = new Piloto("222", "Santiago ", "Piloto principal", 25, 2);
	Empleado* two = new Copiloto("333", "Leo", "CoPiloto de Carga", 20, "2324234");
	Empleado* three = new Azafata("444", "sofia ", "Azafata Aer ", 18, " NorteAmericana");
	Empleado* four = new Administrativa(" Universitario ", " Man", "555", "Mari Cruz ", " Sesd", 23);

	ListaEmpleado* conte = new ListaEmpleado();

	conte->ingresar(*one);
	conte->ingresar(*two);
	conte->ingresar(*three);
	conte->ingresar(*four);

	cout << " Mostrar informacion " << endl;
	cout << conte->toString();
	cout << " Buscar por cedula " << endl;
	cout << "Ingrese la cedula " << endl;
	cin >> ced;
	cout<<conte->buscarConCedula(ced);
	


}