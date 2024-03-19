#include "carga.h"
#include "almacen.h"
#pragma once

using namespace std;

/**
 * Clase genérica contenedor. Representa un almacén que puede contener objetos de un solo tipo y puede ser transportado
*/
template <typename T>
class Contenedor : public Almacen<T>, public Carga
{
public:
    /**
     * Constructor de la clase contenedor
     * @param _capacidad Capacidad del contenedor
    */
    Contenedor(const double& _capacidad) // quitado que lleva
    : Almacen<T>(_capacidad), Carga("Contenedor", _capacidad, 0)
    {}
    
    /**
     * Método que muestra por pantalla la información del contenedor y lo que carga
     * @param os El flujo por el que se escribirá la información
     * @param ident Cuántos espacios hay que dejar al principio de la línea
    */
    void display(ostream& os, int ident) const override {
        string identation(ident,' ');
        os << identation << name << " [" << setprecision(1) << volume << " m3] [" << peso() << " kg] de " << T::tipo() << endl;
        for(const auto& i : Almacen<T>::elemento) {
            i->display(os, ident+2);
        }
    }
    
    /**
     * Redefinición del método peso() de la clase padre item
    */
    double peso() const override {
        int pesoTotal = 0;
        for (const auto& elementos : Almacen<T>::elemento) {
            pesoTotal += elementos->peso();
        }
        return pesoTotal;
        }
 };