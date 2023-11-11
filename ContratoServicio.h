#pragma once
#include"Contrato.h"

class ContratoServicio : public Contrato {
    private: 
        string HorarioLaboral;
        string tipoServicio;

public: 
   ContratoServicio();
   ContratoServicio(string Horario, string tipSer, string cod, string pues, int sala, Empleado& empl, Aeronaves& avion, Fecha& Ingresa, Fecha& finaliza);
   virtual ~ContratoServicio();
   void setHorarioLaboral(string);
   void setTipoServicio(string);
   string getHorarioLaboral();
   string getTipoServicio();
   string toString();
  
};