#include "ListaContrato.h"

ListaContrato::ListaContrato()
{
	ppio = nullptr;
}
ListaContrato::~ListaContrato() {
	NodoContrato* aux = ppio;
	while (aux != nullptr) {
		ppio = ppio->getSigNodo();
		delete aux;
		aux = ppio;
	}
}

bool ListaContrato::estaVacia() {
	return(ppio == nullptr);
}

bool ListaContrato::ingresar(Contrato& contr) {
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

string ListaContrato::toString() {
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

Contrato* ListaContrato::busquedaPorCod(string cod) {
	stringstream s;
	NodoContrato* Pex = ppio;

	
	if (Pex->getContrato()->getCodigo() == cod) {
		if(typeid(Contrato).name())
		return  Pex->getContrato();
		Pex = Pex->getSigNodo();
	}
	return nullptr;
	
}

bool ListaContrato::existeContratoLigadoAEmpleado(string ced){
	NodoContrato* aux = ppio;
	while (aux != NULL) {
		if (aux->getContrato()->getEmpleado()->getCedula() == ced) {
			return true;
		}
		aux = aux->getSigNodo();
	}
	return false;
}

string ListaContrato::reporteAeronaveconTripulacion() {
	stringstream s;
	NodoContrato* Pex = ppio;
	

	while (Pex != NULL) {
		Empleado* empl = Pex->getContrato()->getEmpleado();
		Aeronaves* av = Pex->getContrato()->getAviones();

		if (empl != NULL && av != NULL) {
			s << " Aeronave con Tripulacion " << endl;
			s << "-----------------------------" << endl << endl;
			s << "Avion: " << av->toString() << endl;
			s << " Tripulacion: " << empl->toString() << endl;
		}
		Pex = Pex->getSigNodo();
	}
	return s.str();
}

string ListaContrato::ReporteContratoServicio() {
	stringstream s;
	NodoContrato* Pex = ppio;
	

	while (Pex != NULL) {
		Contrato* aux = Pex->getContrato();
		if (typeid(*aux) == typeid(ContratoServicio)) {
			s << aux->toString();
		}
		Pex = Pex->getSigNodo();
	}
	return s.str();
}
string ListaContrato::ReportePlazoFijo() {
	stringstream s;
	NodoContrato* Pex = ppio;


	while (Pex != NULL) {
		Contrato* aux = Pex->getContrato();
		if (typeid(*aux) == typeid(PlazoFijo)) {
			s << aux->toString();
		}
		Pex = Pex->getSigNodo();
	}
	return s.str();
}

string ListaContrato::ReporteTiempoIndefinido() {
	stringstream s; 
	NodoContrato* Pex = ppio;


	while (Pex != NULL) {
		Contrato* aux = Pex->getContrato();
		if (typeid(*aux) == typeid(TiempoIndefinido)) {
			s << aux->toString();
		}
		Pex = Pex->getSigNodo();
	}
	return s.str();
}

