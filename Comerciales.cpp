#include"Comerciales.h"

Comerciales::Comerciales(string catego, string plac, string Tipo, Fecha& crea, double disRe) 
	:categoria(catego), AviacionCivil(plac, Tipo, crea, disRe) {}
Comerciales::~Comerciales() {}
string Comerciales::toString() {
		stringstream s;
		if (creacion != NULL) {
			s << "El avion fue creado en " << creacion->toString() << endl;
		}
		s << "Su distancia recorrida es: " << distanciaReco << endl;
		s << " La placa es: " << placa << endl;
		s << "El avion es " << tipoAvion << endl;
		s << "------------------------------" << endl;
		s << "Imformacion sobre el avion: " << endl;
		s << "Avion: " << Servicio::NombreA(categoria) << endl;
		s << " Maximos Pasajeros: " << Servicio::Pasajeros(categoria) << endl;
		s << " El Rango es de " << Servicio::Rango(categoria) << " km" << endl;
		s << "La velocidad es " << Servicio::Velocidad(categoria) << "  Km/h" << endl;
		s << "Precion: " << Servicio::Precio(categoria) << " millones de dolares" << endl;
		return s.str();
	}

