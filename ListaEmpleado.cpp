#include "ListaEmpleado.h"

ListaEmpleado::ListaEmpleado(){
	ppio = nullptr;
}

ListaEmpleado::~ListaEmpleado(){
	NodoEmpleado* aux = ppio;
	while (aux != nullptr) {
		ppio = ppio->getSigNodo();
		delete aux;
		aux = ppio;
	}
}

bool ListaEmpleado::estaVacia(){
	return (ppio == nullptr);
}

bool ListaEmpleado::ingresar(Empleado& empl){
	NodoEmpleado* aux = ppio;
	if (estaVacia()) {
		ppio = new NodoEmpleado(empl, nullptr);
		return true;
	}
	else {
		while (aux->getSigNodo() != nullptr)
			aux = aux->getSigNodo();
		aux->setSigNodo(new NodoEmpleado(empl, nullptr));
		return true;

	}
	return false;
}

string ListaEmpleado::toString(){
	stringstream s;
	NodoEmpleado* aux = ppio;
	while (aux != nullptr) {
		s << aux->getEmpleado()->toString();
		aux = aux->getSigNodo();
		s << endl;
	}
	return s.str();

}

string  ListaEmpleado:: buscarConCedula(string ced) {
	stringstream s;

	NodoEmpleado* Pex = ppio;

	while (Pex != NULL) {
		if (Pex->getEmpleado()->getCedula() == ced) {
			s << Pex->getEmpleado()->toString();
		}
		else {
			s << " No se encuentra empleado con ese numero de cedula " << endl;
		}
		Pex = Pex->getSigNodo();
	}
	return s.str();
}


