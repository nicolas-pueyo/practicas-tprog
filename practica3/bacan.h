#include <string>
#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

class Item {
protected:
    double peso, volumen;
    string nombre;

public:
    Item(const double& _peso, const double& _volumen, const string& _nombre)
    :   peso(_peso), volumen(_volumen), nombre(_nombre)
    {}

    string nombre() const {
        return nombre;
    }

    virtual double peso() const {
        return peso;
    }

    virtual double volumen() const {
        return volumen;
    }

    friend ostream& operator<<(ostream& os, Item& obj) {
        os << obj.nombre << " [" << setprecision(1) << obj.volumen << " m3] [" << obj.peso << " kg]"; 
    }
};

class Carga: public Item {
public:
    Carga(const string& _nombre, const double& _volumen, const double& _peso)
		: Item(_peso, _volumen, _nombre)
		{}   
};

template <typename T>
class Almacen {
protected:
	double volGastado;
	double capacidad;
	vector<T*> elemento;

public:
	Almacen(const &double _capacidad)
	: capacidad(_capacidad), volGastado(0)
	{}

	bool guardar(T* _guardable){
	bool guardOK = false;
	if(_guardable->volumen() <=capacidad-volGastado){
		volGastado+=_guardable.volumen;
		elemento.push_back(&_guardable);
		guardOK = true;
	}
	return guardOK;
	}
};



template <typename T>
class Contenedor : public Almacen<T>, public Item{
    
}

class Camion: public Item, public 

ostream& operator<<(ostream& os, Item& obj);

template<typename T>
ostream& operator<<(ostream& os, Contenedor<T>& alm);

ostream& operator<<(ostream& os, Camion& camion)