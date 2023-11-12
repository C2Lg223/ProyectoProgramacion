#include "ListaAeronave.h"

ListaAeronave::ListaAeronave(){
	ppio = nullptr;
}

ListaAeronave::~ListaAeronave(){
	NodoAeronave* aux = ppio;
	while (aux != nullptr) {
		ppio = ppio->getSigNodo();
		delete aux;
		aux = ppio;	
	}
}

bool ListaAeronave::estaVacia(){
	return(ppio == nullptr);
}

bool ListaAeronave::ingresar(Aeronaves& av){
	NodoAeronave* aux = ppio;
	if (estaVacia()) {
		ppio = new NodoAeronave(av, nullptr);
		return true;
	}
	else {
		while (aux->getSigNodo() != nullptr)
			aux = aux->getSigNodo();
		aux->setSigNodo(new NodoAeronave(av, nullptr));
		return true;

	}
	return false;
}

string ListaAeronave::toString(){
	stringstream s;
	NodoAeronave* aux = ppio;
	while (aux != nullptr) {
		s << aux->getAeronave()->toString();
		aux = aux->getSigNodo();
		s << endl;
	}
	return s.str();
	
}



int ListaAeronave::contarObjetos() {
	int cont = 0;
	NodoAeronave* Pex = ppio;
	while (Pex != nullptr) {
		cont++;
		Pex = Pex->getSigNodo();
	}
	return cont;
}

bool ListaAeronave::existeAvionSegunPlaca(string pla) {
	NodoAeronave* aux = ppio;

	while (aux != NULL) {
		if (aux->getAeronave()->getPlaca() == pla) {
			return true;
		}
		aux = aux->getSigNodo();
	}

	return false;
}

/*Aeronaves* ListaAeronave::MayorAreaAcceso() {
	Aeronaves* mayor = NULL;
	NodoAeronave * Pex = ppio;
	if (Pex != NULL) {
		mayor = Pex->getAeronave();
		while (Pex != NULL) {
			
		}
	}
	Persona* obtenerPersonaConMayorSalario() {
		Persona* mayor = NULL; // solo es una flecha
		Nodo* PEx = ppio;
		if (PEx != NULL) {   // Por lo menos hay uno.
			mayor = PEx->getPersona();
			while (PEx != NULL) {
				if (PEx->getPersona()->getSalario() > mayor->getSalario())
					mayor = PEx->getPersona();
				PEx = PEx->getSigNodo();
			}
		}
		return mayor;
	}
}*/


Aeronaves* ListaAeronave::buscarAvionesCivil(string Plac) {
	NodoAeronave* Pex = ppio;
	Aeronaves* avion = Pex->getAeronave();


	while (Pex != NULL) {

		if(typeid(*avion)==typeid(AviacionCivil)){
		if (avion->getPlaca() == Plac) {
			return avion;
		 }
		}
		Pex = Pex->getSigNodo();

	}

	return nullptr;
}


