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

/*
* ListaAeronave::busquedaPlaca(string pla) {
	NodoAeronave* Pex = ppio;

	while (Pex != NULL) {

		if (Pex->getAeronave())



	}
}*/
