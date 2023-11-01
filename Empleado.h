#include<iostream>
#include<sstream>
using namespace std;

class Empleado {
   protected: 
	   string cedula;
	   string nombre;
	   string Ocupacion;
	   int edad;
	 

  public: 
	  Empleado();
	  Empleado(string, string, string, int);
	  virtual~Empleado();
	  void setCedula(string);
	  void setNombre(string);
	  void setOcupacion(string);
	  void setEdad(int);

	  string getCedula();
	  string getNombre();
	  string getOcupacion();
	  int getEdad();
	  
	  virtual string toString() = 0;
	  

};