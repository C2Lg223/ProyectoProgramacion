#include"Contrato.h"

Contrato::Contrato()
	: codigo(" "), Puesto(" "), salario(0) {
	//REVISAR SI ESTA CORRECTO


}
Contrato::Contrato( string cod, string pues, int sala )
	: codigo(cod), Puesto(pues), salario(sala) {}

Contrato::~Contrato() {}
void Contrato::setCodigo(string cod) { codigo = cod; }
void Contrato::setPuesto(string pues) { Puesto = pues; }
void  Contrato::setSalario(int sala) { salario = sala; }

string  Contrato::getCodigo() { return codigo; }
string  Contrato::getPuesto() { return Puesto; }
int  Contrato::getSalario() { return salario; }
