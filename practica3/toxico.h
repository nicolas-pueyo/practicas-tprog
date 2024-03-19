#include "item.h"
#pragma once

/**
 * Clase Toxico. Representa un producto tóxico. Mutuamente excluyente con seres vivos y productos estándar
*/
class Toxico: public Item {
public:
    Toxico(const string& _nombre, const double& _volumen, const double& peso);

    /**
     * Método estático que devuelve el tipo de la clase
    */
    static string tipo();
};