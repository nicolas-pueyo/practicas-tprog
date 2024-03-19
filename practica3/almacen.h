#include <vector>
#pragma once

/**
 * Clase genérica almacén. Representa cualquier objeto en el que se puedan guardar cosas
*/
template <typename T>
class Almacen {
protected:
	double capacidad;
	double volGastado;
	vector<T*> elemento;

public:
	/**
	 * Construye la clase Almacen 
	 * @param _capacidad capacidad que tendrá el almacén
	*/
	Almacen(const double& _capacidad)
	: capacidad(_capacidad), volGastado(0)
	{}

	/**
	 * Guarda, si es posible, un objeto en el almacén
	 * @param _guardable puntero al objeto que será guardado
	 * @return Si se ha podido guardar o no
	*/
	bool guardar(T* _guardable) {
        bool guardOK = false;
        if(_guardable->volumen() <=capacidad-volGastado){
            volGastado+=_guardable->volumen();
            elemento.push_back(_guardable);
            guardOK = true;
        }
        return guardOK;
	}

	/**
	 * Destructor de la clase almacén
	*/
	virtual ~Almacen()
	{
		for(auto& i : elemento)
		{
			delete i;
		}
	}
};