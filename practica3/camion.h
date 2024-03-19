#include "almacen.h"
#include "item.h"
#include "carga.h"
#pragma once

/**
 * Clase camión. Representa un objeto que puede llevar cargas y no puede llevarse a sí mismo
*/
class Camion: public Almacen<Carga>, public Item {
public:
    /**
     * Constructor de la clase camión
     * @param _capacidad La capacidad que tendrá el camión
    */
    Camion(const double& _capacidad)
    : Almacen<Carga>(_capacidad), Item("Camion", _capacidad, 0)
    {}
    
    /**
     * Redefinición del método peso() de la clase padre item
    */
    double peso() const override {
        int pesoTotal = 0;
        for (const auto& i : elemento) {
            pesoTotal += i -> peso();
        }
        return pesoTotal;
    }

    /**
     * Método que muestra por pantalla la información del camión y lo que carga
     * @param os El flujo por el que se escribirá la información
     * @param ident Cuántos espacios hay que dejar al principio de la línea
    */
    void display(ostream& os, int ident) const override {
        string identation(ident, ' ');
        os <<  fixed << identation << nombre() << " [" << setprecision(1) << volumen() << " m3] [" << peso() << " kgs]\n";
        for (const auto& i : elemento) {
            i->display(os,ident+2); 
        }
    }

    /**
     * Redefinición del operador << para camiones
     * @param os El flujo con el que interactua <<
     * @param c El objeto de tipo camión que se introduce en el flujo
     * @return El flujo os actualizado
    */
    friend ostream& operator<<(ostream& os, const Camion& c) {
        c.display(os, 0);
        return os;
    }
};