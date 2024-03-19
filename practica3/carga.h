#include <string>
#include "item.h"
#pragma once

class Carga: public Item {
public:
    Carga(const string& _nombre, const double& _volumen, const double& _peso);

    static string tipo(); 
};