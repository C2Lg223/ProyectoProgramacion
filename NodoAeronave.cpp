#include "NodoAeronave.h"

NodoAeronave::NodoAeronave(){
	aeronavePtr = nullptr;
	ptrNodo = nullptr;
}

NodoAeronave::NodoAeronave(Aeronaves& av, NodoAeronave* nod){
	aeronavePtr = (Aeronaves*)&av;
	ptrNodo = nod;
}

NodoAeronave::~NodoAeronave(){
	if (aeronavePtr = nullptr) delete aeronavePtr;
}

void NodoAeronave::setAeronave(Aeronaves& av){
	aeronavePtr = (Aeronaves*)&av;
}

void NodoAeronave::setSigNodo(NodoAeronave* nod){
	ptrNodo = nod;
}

Aeronaves* NodoAeronave::getAeronave(){
	return aeronavePtr;
}

NodoAeronave* NodoAeronave::getSigNodo(){
	return ptrNodo;
}
