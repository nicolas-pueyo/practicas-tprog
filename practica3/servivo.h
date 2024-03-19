#include "item.h"
#pragma once

/**
 * Clase SerVivo. Representa un ser viviente. Mutuamente excluyente con tóxicos y productose estándar
*/
class SerVivo : public Item {
public:
    SerVivo(const string& _nombre, const double& _volumen, const double& _peso);

    /**
     * Método estático que devuelve el tipo de la clase
    */
    static string tipo();
};