#include "carga.h"
#pragma once

class Producto: public Carga {
public:
    Producto(const string& _nombre, const double& _volumen, const double& _peso);
};