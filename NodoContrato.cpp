#include "NodoContrato.h"

NodoContrato::NodoContrato() {
	contratoPtr = NULL;
	ptrNodo = NULL;
}

NodoContrato::NodoContrato(Contrato& contr, NodoContrato* nod) {
	contratoPtr = (Contrato*)&contr;
	ptrNodo = nod;
}

NodoContrato::~NodoContrato() {
	if (contratoPtr != NULL)
		delete contratoPtr;
}

void NodoContrato::setContrato(Contrato& contr) {
	contratoPtr = (Contrato*)&contr;
}
void NodoContrato::setSigNodo(NodoContrato* nod) {
	ptrNodo = nod;

}

Contrato* NodoContrato::getContrato() { return contratoPtr; }
NodoContrato* NodoContrato::getSigNodo() { return ptrNodo; }
