#include <iomanip>
#include <iostream>
#include <string>
#pragma once

using namespace std;

/**
 * Clase item. Representa un objeto que tiene nombre, peso y volumen
*/
class Item {
protected:
    string name;
    double volume, weight;

public:
    /**
     * Constructor de la clase item
     * @param _nombre El nombre del objeto
     * @param _volumen El volumen del objeto
     * @param _peso El peso del objeto
    */
    Item(const string& _nombre, const double& _volumen, const double& _peso);

    /**
     * Método para obtener el nombre del objeto
    */
    string nombre() const;

    /**
     * Método para obtener el peso del objeto
    */
    virtual double peso() const;

    /**
     * Método para obtener el volumen del objeto
    */
    virtual double volumen() const;

    /**
     * Método que muestra por pantalla la información del contenedor y lo que carga
     * @param os El flujo por el que se escribirá la información
     * @param ident Cuántos espacios hay que dejar al principio de la línea
    */
    virtual void display(ostream& os, int ident) const;

    virtual ~Item() {}
};