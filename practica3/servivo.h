#include "item.h"
#pragma once

class SerVivo : public Item {
public:
    SerVivo(const string& _nombre, const double& _volumen, const double& _peso);

    static string tipo();
};