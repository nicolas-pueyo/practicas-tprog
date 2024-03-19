#include "carga.h"
#include "almacen.h"
#pragma once

using namespace std;

template <typename T>
class Contenedor : public Almacen<T>, public Carga
{
public:
    Contenedor(const double& _capacidad) // quitado que lleva
    : Almacen<T>(_capacidad), Carga("Contenedor", _capacidad, 0)
    {}
    
    void display(ostream& os, int ident) const override {
        string identation(ident,' ');
        os << identation << name << " [" << setprecision(1) << volume << " m3] [" << peso() << " kg] de " << T::tipo() << endl;
        for(const auto& i : Almacen<T>::elemento) {
            i->display(os, ident+2);
        }
    }
    
    double peso() const override {
        int pesoTotal = 0;
        for (const auto& elementos : Almacen<T>::elemento) {
            pesoTotal += elementos->peso();
        }
        return pesoTotal;
        }
 };