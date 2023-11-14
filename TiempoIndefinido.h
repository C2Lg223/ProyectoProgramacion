#include"Contrato.h"
#include"Plaza.h"

class TiempoIndefinido : public Contrato {
private:
	Plaza* nPlaza;

public:
	TiempoIndefinido(Plaza&, string, string, double, Fecha&, Empleado&);
	TiempoIndefinido(Plaza&, string, string, double,  Fecha&, Empleado&, Aeronaves&);
	virtual ~TiempoIndefinido();
	void setPlazaC(Plaza&);
	Plaza* getPlazaC();
	string toString();
	bool ContratoExcedido(Fecha&);
	bool EsPlazoFijo();


};






