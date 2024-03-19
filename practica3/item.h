#include <iomanip>
#include <iostream>
#include <string>
#pragma once

using namespace std;

class Item {
protected:
    string name;
    double volume, weight;

public:
    Item(const string& _nombre, const double& _volumen, const double& _peso);

    string nombre() const;

    virtual double peso() const;

    virtual double volumen() const;

    virtual void display(ostream& os, int ident) const;
};