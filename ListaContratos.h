#include"NodoContratos.h"

class ListaContratos {
   private: 
	   NodoContrato* ppio;
  public: 
	  ListaContratos();
	  virtual ~ListaContratos();
	  bool estaVacia();
	  bool ingresar(Contrato&);
	  string toString();
};