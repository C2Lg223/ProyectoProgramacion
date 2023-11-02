#include"Contrato.h"

class ContratoServicio : public Contrato {
    private: 
        string HorarioLaboral;
        string tipoServicio;

public: 
   ContratoServicio();
   ContratoServicio(string, string,  string, string, int, Fecha&, Fecha& );
   virtual ~ContratoServicio();
   void setHorarioLaboral(string);
   void setTipoServicio(string);
   string getHorarioLaboral();
   string getTipoServicio();
   string toString();
  
};