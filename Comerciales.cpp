#include"Comerciales.h"

Comercial::Comercial(string catego, string plac, string Tipo, Fecha& crea, double disRe) 
	:categoria(catego), AviacionCivil(plac, Tipo, crea, disRe) {}
Comercial::~Comercial() {}
string Comercial::toString() {
		stringstream s;

		s << "\n<=<=<=<=<=<=<=> AVION COMERCIAL <=<=<=<=<=<=<=> " << endl << endl;
		if (creacion != NULL) {
			s << "   Fecha de Creacion:  " << creacion->toString(); 
		}
		s << "   Distancia Recorrida: " << distanciaReco << endl;
		s << "   Placa: " << placa << endl;
		s << "   Tipo de avion: " << tipoAvion << endl << endl;
		s << "   ---------------------------------" << endl;
		s << "   Avion: " << Servicio::NombreA(categoria) << endl;
		s << "   Pasajeros Maximos: " << Servicio::Pasajeros(categoria) << endl;
		s << "   Rango: " << Servicio::Rango(categoria) << "km" << endl;
		s << "   Velocidad: " << Servicio::Velocidad(categoria) << "Km/h" << endl;
		s << "   Precio: " << Servicio::Precio(categoria) << " millones de dolares" << endl;
		s << endl;
		s << "\n<=<=<=<=<=<=<=> AVION COMERCIAL <=<=<=<=<=<=<=> " << endl << endl;

	
		return s.str();
	}

