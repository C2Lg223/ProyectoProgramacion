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

}


bool ListaAeronave::hayAvionDeCarga() {
	NodoAeronave* pt = ppio;

	while (pt != nullptr) {
		if (typeid(Aeronaves) == typeid(Carga))
			return true;

		pt = pt->getSigNodo();
	}
}
/*  Revisar 
Aeronaves* ListaAeronave::MayorAreaAcceso() {
	Aeronaves* mayor = NULL;
	double AreaMayor = 0;
	Carga* m = NULL;
	NodoAeronave* Pex = ppio;
	
		while (Pex != NULL) {
			Aeronaves* Av = Pex->getAeronave();
			  if (typeid(Aeronaves) == typeid (Carga)){
				  Carga* car = 
				  Carga* car = (typeid(Carga) == typeid(Aeronaves));
				  double area = m->AreaAcceso(); {
					  if (area > AreaMayor) {
						  mayor = Pex->getAeronave();
						  AreaMayor = area;

					  }
				  }

			}
		}
	

}*/
/*
* ListaAeronave::busquedaPlaca(string pla) {
	NodoAeronave* Pex = ppio;

	while (Pex != NULL) {

		if (Pex->getAeronave())



	}
}*/
