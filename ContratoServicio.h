#pragma once
#include"Contrato.h"

class ContratoServicio : public Contrato {
    private: 
        string HorarioLaboral;
        string tipoServicio;

public: 
    ContratoServicio(string, string, string, string, int, Fecha&, Fecha&, Empleado&);
    ContratoServicio(string, string, string, string, int, Fecha&, Fecha&, Empleado&, Aeronaves&);
   virtual ~ContratoServicio();
   void setHorarioLaboral(string);
   void setTipoServicio(string);
   string getHorarioLaboral();
   string getTipoServicio();
   string toString();
  
};