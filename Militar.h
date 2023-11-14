#pragma once
#include"Aeronaves.h"
#include"ServicioClase.h"

class Militar : public Aeronaves {
  private: 
      int velocidad;
      string TipoAv;
      string Categoria;

public: 
    Militar(int , string , string,Fecha&, double, string);
    virtual~Militar();
    void setVelocidad(int velocid);
    void setTipoAvionM(string TipoMi);
    string toString();
    bool EsAvionComercial();
    bool EsAvionDeCarga();
    double AreaAcceso();
};
