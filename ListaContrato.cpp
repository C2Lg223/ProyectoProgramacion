#include "ListaContrato.h"

ListaContratos::ListaContratos()
{
	ppio = nullptr;
}
ListaContratos::~ListaContratos() {
	NodoContrato* aux = ppio;
	while (aux != nullptr) {
		ppio = ppio->getSigNodo();
		delete aux;
		aux = ppio;
	}
}

bool ListaContratos::estaVacia() {
	return(ppio == nullptr);
}

bool ListaContratos::ingresar(Contrato& contr) {
	NodoContrato* aux = ppio;
	if (estaVacia()) {
		ppio = new NodoContrato(contr, nullptr);
		return true;
	}
	else {
		while (aux->getSigNodo() != nullptr) {
			aux = aux->getSigNodo();
			aux->setSigNodo(new NodoContrato(contr, nullptr));
			return true;
		}

	}

	return false;
}

string ListaContratos::toString() {
	stringstream s;
	NodoContrato* aux = ppio;
	s << " Lista de Contratos en el sistemas " << endl;
	s << "--------------------------------------" << endl;
	while (aux != NULL) {
		s << aux->getContrato()->toString() << endl;
		aux = aux->getSigNodo();
	}
	return s.str();
}
