#pragma once
#include"Aeronaves.h"
#include"ServicioClase.h"

class Militar : public Aeronaves {
  private: 
      int velocidad;
      string TipoAv;
      string Categoria;

public: 
    Militar(int velocid, string TPavion, string cat,Fecha& crea, double disRe);
    virtual~Militar();
    void setVelocidad(int velocid);
    void setTipoAvionM(string TipoMi);
    string toString();
};
