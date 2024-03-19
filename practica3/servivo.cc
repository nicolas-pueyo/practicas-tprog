#include "servivo.h"    

SerVivo::SerVivo(const string& _nombre, const double& _volumen, const double& _peso)
        : Item(_nombre, _volumen, _peso)
        {}

string SerVivo::tipo() {
        return "Seres Vivos";
    }
