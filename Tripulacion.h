#include"Empleado.h"
#include"Aeronaves.h"

class Tripulacion : public Empleado {
protected:
public:
	Tripulacion(string, string, string, int);
	virtual ~Tripulacion();

	virtual string toString() = 0;
};