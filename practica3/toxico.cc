#include "toxico.h"

Toxico::Toxico(const string& _nombre, const double& _volumen, const double& _peso)
    : Item(_nombre, _volumen, _peso)
    {}

string Toxico::tipo() {
    return "Productos Toxicos";
}