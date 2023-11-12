#include "Militar.h"

Militar::Militar(int velocid, string Tipoavion, string cat, Fecha& crea, double disRe, string plac)
: velocidad(velocid), TipoAv(Tipoavion), Categoria(cat),Aeronaves(crea, disRe, plac) {}

Militar::~Militar()
{
}

void Militar::setVelocidad(int velocid)
{
	velocidad = velocid;
}

void Militar::setTipoAvionM(string TipoMi)
{
	TipoAv = TipoMi;
}

string Militar::toString() {
	stringstream s;
	s << "Velocidad: " << velocidad << endl;
	s << "Tipo de avion: " << TipoAv << endl;
	if (creacion != NULL) {
		s << "  El avion fue creado en " << creacion->toString() << endl;
	}
	s << "  Placa:  " << Placa << endl;
	s << "  Su distancia recorrida es: " << distanciaReco << endl;
	s << "--------------------------------" << endl;
	s << "--------------------------------" << endl;
	s << " Tipo avion Militar: " << Servicio::NombreA(Categoria) << endl;
	s << " Carga: " << Servicio::ACarga(Categoria) << endl;
	s << " Alcance: " << Servicio::Alcance(Categoria) << endl;
	return s.str();


}

bool Militar::EsAvionComercial() { return false; }
bool Militar::EsAvionDeCarga() { return false; }
