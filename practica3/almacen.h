#include <vector>
#pragma once

template <typename T>
class Almacen {
protected:
	double capacidad;
	double volGastado;
	vector<T*> elemento;

public:
	Almacen(const double& _capacidad)
	: capacidad(_capacidad), volGastado(0)
	{}

	bool guardar(T* _guardable) {
        bool guardOK = false;
        if(_guardable->volumen() <=capacidad-volGastado){
            volGastado+=_guardable->volumen();
            elemento.push_back(_guardable);
            guardOK = true;
        }
        return guardOK;
	}
};