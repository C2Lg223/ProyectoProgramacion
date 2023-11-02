#include "Plaza.h"

Plaza::Plaza()
	:codPlaza(" "), desPuesto(" ") {}

Plaza::Plaza(string CodPlaza, string puesto)
	:codPlaza(CodPlaza), desPuesto(puesto) {
}

Plaza::~Plaza() {}

void Plaza::setCodigoPlaza(string CodPlaza) { codPlaza = CodPlaza; }
void Plaza::setDescripcionPuesto(string descPuesto) { desPuesto = descPuesto; }
string Plaza::getCodigoPlaza() { return codPlaza; }
string Plaza::getDescripcionPuesto() { return desPuesto; }
string Plaza::toString() {
	stringstream s;
	s << " Codigo de la Plaza: " << codPlaza << endl;
	s << " Puesto: " << desPuesto << endl;
	return s.str();
}
