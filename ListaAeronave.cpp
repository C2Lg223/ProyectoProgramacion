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

bool ListaAeronave::existeAvionSegunPlaca(string pla){
	NodoAeronave* aux = ppio;

	while (aux != NULL) {
		if (aux->getAeronave()->getPlaca() == pla) {
			return true;
		}
		aux = aux->getSigNodo();
	}

	return false;
}

Aeronaves* ListaAeronave::busquedaPorPlaca(string pla){
	NodoAeronave* aux = ppio;
	while (aux != NULL) {
		if (aux->getAeronave()->getPlaca() == pla) {
			return  aux->getAeronave();
		}
		aux = aux->getSigNodo();
	}
	return NULL;
}

bool ListaAeronave::existeAvCivil(string pla){
	NodoAeronave* aux = ppio;
	while (aux != NULL) {
		if ((typeid(*aux->getAeronave()) == typeid(Carga) || typeid(*aux->getAeronave()) == typeid(Comercial)) && aux->getAeronave()->getPlaca() == pla) {
			return true;
		}
		aux = aux->getSigNodo();
	}
	return false;
}

bool ListaAeronave::existeAvComercial(string pla){
	NodoAeronave* aux = ppio;
	while (aux != NULL) {
		if ((typeid(*aux->getAeronave()) == typeid(Comercial)) && aux->getAeronave()->getPlaca() == pla) {
			return true;
		}
		aux = aux->getSigNodo();
	}

	return false;
}

bool ListaAeronave::existeComercial(){
	NodoAeronave* aux = ppio;
	while (aux != NULL) {
		if (typeid(*aux->getAeronave()) == typeid(Comercial)) {
			return true;
		}
		aux = aux->getSigNodo();
	}

	return false;
}


string  ListaAeronave::AeronavesCon20annio(Fecha& actual) {
	NodoAeronave* Pex = ppio;
	Aeronaves* avion = Pex->getAeronave();

	while (Pex != NULL) {
		if (avion->EdadAviones(actual) < 20) {
			return avion->toString();
		}

	}

}


string ListaAeronave::imprimirComerciales(){
	NodoAeronave* aux = ppio;
	stringstream s;

	s << "--------AVIONES COMERCIALES--------" << endl << endl;

	while (aux != NULL) {
		if (typeid(*aux->getAeronave()) == typeid(Comercial))
			s << aux->getAeronave()->toString() << endl;
		aux = aux->getSigNodo();

	}

	return s.str();
}
Aeronaves* ListaAeronave::MayorAreaAcceso() {
	Aeronaves* mayor = nullptr;

	NodoAeronave* Pex = ppio;
	if (Pex != NULL) {
		mayor = Pex->getAeronave();

		while (Pex != NULL) {
			if (typeid(*mayor) == typeid (Carga)) {
				if (Pex->getAeronave()->AreaAcceso() > mayor->AreaAcceso()) {
					mayor = Pex->getAeronave();
					Pex = Pex->getSigNodo();
				}



			}

		}
	}

	return mayor;
}
	
