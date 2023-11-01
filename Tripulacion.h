#include"Empleado.h"
#include"Aeronaves.h"

class Tripulacion : public Empleado {
protected:
	Aeronaves* nave;
};