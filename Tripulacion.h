#include"Empleado.h"
#include"Aeronaves.h"

class Tripulacion : public Empleado {
protected:
	Aeronaves* nave;
public:
	Tripulacion();
	Tripulacion(string, string, string, int, Aeronaves&);
	virtual ~Tripulacion();

	void setAvion(Aeronaves&);

	Aeronaves* getAvion();
	virtual string toString() = 0;
};