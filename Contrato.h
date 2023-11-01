#include<iostream>
#include<sstream>
using namespace std;

class Contrato {
   protected: 
	   string codigo;
	   string Puesto;
	   int salario;
public: 
	Contrato();
	Contrato(string, string, int);
	virtual ~Contrato();
	void setCodigo(string);
	void setPuesto(string);
	void setSalario(int);
	string getCodigo();
	string getPuesto();
	int getSalario();
	virtual string toString() = 0;
};