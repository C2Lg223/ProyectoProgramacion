#include"Contrato.h"

class NodoContrato {


private: 
	Contrato* contratoPtr;
	NodoContrato* ptr;


public: 
	NodoContrato();
	NodoContrato(contratoPtr&, NodoContrato*);
	virtual ~NodoContrato();
	void setContrato();
	void setSiguienteNodo();
	Contrato* getContrato();
	NodoContrato* getSigNodo();

};