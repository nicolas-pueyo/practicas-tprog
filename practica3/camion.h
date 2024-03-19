#include "almacen.h"
#include "item.h"
#include "carga.h"
#pragma once

class Camion: public Almacen<Carga>, public Item {
public:
    Camion(const double& _capacidad)
    : Almacen<Carga>(_capacidad), Item("Camion", _capacidad, 0)
    {}
        
    double peso() const override {
        int pesoTotal = 0;
        for (const auto& i : elemento) {
            pesoTotal += i -> peso();
        }
        return pesoTotal;
    }

    void display(ostream& os, int ident) const override {
        string identation(ident, ' ');
        os <<  fixed << identation << nombre() << " [" << setprecision(1) << volumen() << " m3] [" << peso() << " kgs]\n";
        for (const auto& i : elemento) {
            i->display(os,ident+2); 
        }
    }

    friend ostream& operator<<(ostream& os, const Camion& c) { // nose porque friend xd
        c.display(os, 0);
        return os;
    }
};