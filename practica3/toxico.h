#include "item.h"
#pragma once

class Toxico: public Item {
public:
    Toxico(const string& _nombre, const double& _volumen, const double& peso);

    static string tipo();
};