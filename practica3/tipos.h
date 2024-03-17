#pragma once
#include <string.h>
#include <vector>
#include <iomanip>
#include <sstream>

using namespace std;


//item, carga y almacen


class Item{
	protected:
    int peso;
    int volumen;
    string nombre;
    
  	public:
    	Item(const string& _nombre, const double& _volumen, const double& _peso)
      	: nombre(_nombre), volumen(_volumen), peso(_peso)
        {}
      	virtual string tipo() const = 0;
      	string nombre() const {
        	return nombre;
        }
      	virtual double pesofunc() const {
			return peso;
		}
      	double volumenfunc() const {return volumen;}

		/*
		*@param space Determina los espacios que se insertarán
		*@return Todo el string con la información del objeto
		*/
		virtual string format(string space = "") const {
			stringstream ss;
			ss << space << nombre << " [" << volumen << " m3] " << setprecision(4)
			<< "[" << peso << " kg]";
			return ss.str();
		} // devuelve la información completa del item
};

class Carga: public Item{ //La idea es hacer todas las clases que solo sirvan para heredar en este archivo, y no hay un carga puro, ya que para eso usaré producto.
	public:
		Carga(const string& _nombre, const double& _volumen, const double& _peso)
		: Item(_nombre, _volumen, _peso)
		{}

		string tipo() const {
			return "Carga Estandar";
		}
};

template <typename T>
class Almacen{
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
			this->elemento.push_back(&_guardable);
			guardOK = true;
		}
		return guardOK;
		}
};

