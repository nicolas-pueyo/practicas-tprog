#include "carga.h"
#pragma once

/**
 * Clase producto. Representa un producto estándar. Mutuamente excluyente con tóxicos y seres vivos
*/
class Producto: public Carga {
public:
    Producto(const string& _nombre, const double& _volumen, const double& _peso);
};