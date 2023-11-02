#include<iostream>
#include<sstream>
using namespace std;

class Plaza {
   private: 
	   string codPlaza;
	   string desPuesto;

public: 
	Plaza();
	Plaza(string, string);
	virtual ~Plaza();
	void setCodigoPlaza(string);
	void setDescripcionPuesto(string);
	string getCodigoPlaza();
	string getDescripcionPuesto();
	string toString();
};