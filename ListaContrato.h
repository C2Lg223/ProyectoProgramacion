#include"NodoContratos.h"

class ListaContratos {
private:
	NodoContrato* ppio;
public:
	ListaContratos();
	ListaContratos();
	bool estaVacia();
	bool ingresar(Contrato&);
	string toString();
};