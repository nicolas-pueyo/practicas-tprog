#include <string>
#include "item.h"
#pragma once

/**
 * Clase carga. Representa un objeo común a ser transportado.
*/
class Carga: public Item {
public:
    /**
     * Constructor de la clase carga
     * @param _nombre El nombre de la carga
     * @param _volumen El volumen de la carga
     * @param _peso El peso de la carga
    */
    Carga(const string& _nombre, const double& _volumen, const double& _peso);

    /**
     * Método estático que devuelve el tipo de la clase
    */
    static string tipo(); 
};