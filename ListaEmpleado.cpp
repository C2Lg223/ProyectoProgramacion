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

Empleado*  ListaEmpleado:: buscarConCedula(string ced) {

	NodoEmpleado* Pex = ppio;

	while (Pex != NULL) {
		if (Pex->getEmpleado()->getCedula() == ced) {
			return (Pex->getEmpleado());
		
		}	Pex = Pex->getSigNodo();
	}
		
	
} 

bool ListaEmpleado::eliminaEmpleado(string ced) {
	NodoEmpleado* PEx = ppio;
	NodoEmpleado* borrado = NULL;
	bool encontrado = false;
	if (PEx != NULL) {
		if (PEx->getEmpleado()->getCedula() == ced) { // Borrar primero.
			borrado = ppio;
			ppio = borrado->getSigNodo();
			delete borrado->getEmpleado();
			delete borrado;
			return true;
		}
		else
		{
			while (PEx->getSigNodo() != NULL && !encontrado) {
				if (PEx->getSigNodo()->getEmpleado()->getCedula() != ced)
					PEx = PEx->getSigNodo();
				else
					encontrado = true;
			}
			if (PEx->getSigNodo() != NULL) {
				borrado = PEx->getSigNodo();
				PEx->setSigNodo(borrado->getSigNodo());
				delete borrado->getEmpleado();
				delete borrado;
				return true;
			}
			else
				return false;
		}
	}
	return false;
}

bool ListaEmpleado::hayPilotos() {
	NodoEmpleado* empl = ppio;

	while (empl != NULL) {
		if (typeid(Empleado) == typeid(Piloto))
			return true;

		empl = empl->getSigNodo();
	}
}


