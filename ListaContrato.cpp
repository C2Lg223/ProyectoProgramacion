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

bool ListaContrato::listaContratosestaVacia() {
	return(ppio == nullptr);
}

bool ListaContrato::ingresar(Contrato& contr) {
	NodoContrato* aux = ppio;
	if (listaContratosestaVacia()) {
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
bool ListaContrato::existeContradoPorCod(string cod) {
	NodoContrato* Pex = ppio;

	while (Pex != NULL) {
		if (Pex->getContrato()->getCodigo() == cod)return true;
	}
	return false;
}
Contrato* ListaContrato::MostrarPorCod(string cod) {
	NodoContrato* Pex = ppio;

	while (Pex != NULL) {
		if (Pex->getContrato()->getCodigo() == cod) {
			if (typeid(Contrato).name())
				return  Pex->getContrato();
			
		}Pex = Pex->getSigNodo();
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


string ListaContrato::ReportePilotoAvCarga() {
	stringstream s;
	NodoContrato* ptrContra = ppio;
	


	while (ptrContra != NULL) {
		Contrato* ct = ptrContra->getContrato(); 
		if (ct->getAviones()->EsAvionDeCarga() == true && ct->getEmpleado()->EsPiloto() == true) {
			s << "Pilotos de Aviones de Carga  " << endl;
			s << "--------------------------------------" << endl;
			s << ct->getEmpleado()->toString() << endl;
		}
		ptrContra = ptrContra->getSigNodo();
	}
	return s.str();
}
string ListaContrato::EmpleadosDeAvionesComerciales() {
	stringstream s;
	NodoContrato* ptrContra = ppio;
	while (ptrContra != NULL) {
		Contrato* ct = ptrContra->getContrato();
		if (ct->getAviones()->EsAvionComercial() == true) {
			s << "Tripulacion de Aviones Comerciales  " << endl;
			s << "--------------------------------------" << endl;
			s << ct->getEmpleado()->toString() << endl;
		}
		ptrContra = ptrContra->getSigNodo();
	}
	return s.str();
}



string ListaContrato::ContratosPlazoFijExcedidos(Fecha& Actual) {
	stringstream s;
	NodoContrato* Pex = ppio;

	while (Pex != NULL) {
		Contrato* con = Pex->getContrato();
		if (typeid(*con) == typeid (PlazoFijo) && con->ContratoExcedido(Actual) == true) {
			s << con->toString() << endl;
		}
	}
	return s.str();
}

void  ListaContrato::BuscaEmplConCed(string ced) {
	stringstream s;
	NodoContrato* Pex = ppio;

	while (Pex != NULL) {
		Aeronaves* Av = Pex->getContrato()->getAviones();
		Empleado* Empl = Pex->getContrato()->getEmpleado();
		if (Empl->getCedula() == ced) {
			s << Empl->toString() << endl;
			s << Av->toString() << endl;
		}	
		Pex = Pex->getSigNodo();
	}
	cout << s.str();
}

bool ListaContrato::EliminarEmpleado(string ced) {
	NodoContrato* Pex = ppio;
	NodoContrato* borrado = NULL;
	bool encontrado = false;

	if (Pex != NULL) {
		Contrato* aux = Pex->getContrato();
		Aeronaves* vincu = Pex->getContrato()->getAviones();

		  if (Pex->getContrato()->getEmpleado()->getCedula() == ced) {
			borrado = ppio;
			ppio = borrado->getSigNodo();
			aux->desvincularAeronave();
			delete borrado->getContrato();
			delete borrado->getContrato()->getEmpleado();
			delete borrado;
			return true;
		  }
	      } else {
		        while (Pex->getSigNodo() != NULL && !encontrado) {
					if (Pex->getSigNodo()->getContrato()->getEmpleado()->getCedula() != ced) {
						Pex = Pex->getSigNodo();
					}
					else {
						encontrado = true;
					}
					
		  }
	         if (Pex->getSigNodo() != NULL) {
					borrado = Pex->getSigNodo();
					Pex->setSigNodo(borrado->getSigNodo());
					delete borrado->getContrato();
					delete borrado->getContrato()->getEmpleado();
					delete borrado;
					return true;
			  }	 else {
				 return false;
			 }
	}
}

bool ListaContrato::eliminarContrato(string cod) {
	NodoContrato* PEx = ppio;
	NodoContrato* borrado = NULL;
	bool encontrado = false;

	if (PEx != NULL) {
		if (PEx->getContrato()->getCodigo() == cod) {
			borrado = ppio;
			ppio = borrado->getSigNodo();
			delete borrado->getSigNodo();
			delete borrado->getContrato();
			delete borrado;
			return true;
		}else
		{
			while (PEx->getSigNodo() != NULL && !encontrado) {
				if (PEx->getSigNodo()->getContrato()->getCodigo() != cod)
					PEx = PEx->getSigNodo();
				else
					encontrado = true;
			}
				if (PEx->getSigNodo() != NULL) {
					borrado = PEx->getSigNodo();
					PEx->setSigNodo(borrado->getSigNodo());
					delete borrado->getContrato();
					delete borrado;
					return true;
				}
				else
					return false;
		}
	}
		return false;
}

/*bool ListaContrato::eliminarAeronaves(string Placa) {
	string nuevaPlaca;
	NodoContrato* PEx = ppio;
	NodoContrato* borrado = NULL;
	bool encontrado = false;

	if (PEx->getContrato()->getAviones()->getPlaca() == Placa) {
		Aeronaves* aeronavesBorrada = PEx->getContrato()->getAviones();
		Contrato* contratoActual = PEx->getContrato();

		if (PEx == ppio) {
			ppio = ppio->getSigNodo();
		}
		else {
			borrado->setSigNodo(PEx->getSigNodo());
		}
		delete aeronavesBorrada;
		delete PEx;

		NodoContrato* temp = ppio;

		while (temp != nullptr) {
			if (temp->getContrato()->getAviones()->getPlaca () == nuevaPlaca) {
				Aeronaves* avion = temp->getContrato()->getAviones();
				if (avion->)
				
			}
		}
	}



}*/




bool ListaContrato::existeContratosExcedido(Fecha& actual) {
	NodoContrato* Pex = ppio;
	Contrato* con = Pex->getContrato();

	while (Pex != NULL) {
		if (con->ContratoExcedido(actual) == true) {
			return true;
		}
	}
	return  false;


}

