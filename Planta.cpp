#include "Planta.h"

Planta::Planta() :TipoArea(" ") {}
Planta::Planta(string TipAdmi, string ced, string nom, string Ocupaci, int ed) : TipoArea(TipAdmi), Empleado(ced, nom, Ocupaci, ed) { }
Planta::~Planta() {}
void Planta::setTipoArea(string TPAdmi) { TipoArea = TPAdmi; }
