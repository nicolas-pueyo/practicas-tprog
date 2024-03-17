#pragma once

#include "tipos.h"


using namespace std;

// tipos a crear:

//normales:
// camión: es un almacen y un item
// filter: es un almacen y una carga, usa el tipo que vayuamos a meter en el
// contenedor: "es un filtro"


class Producto: public Carga {
    public:
        Producto(const string& _nombre, const double& _volumen, const double& _peso)
            : Carga(_nombre, _volumen, _peso)
            {}
};


class Camion: public Almacen<Carga>, public Item {
    public:
        Camion(const double& _capacidad)
            : Almacen<Carga>(_capacidad), Item("Camion", _capacidad, 0)
            {}
        
        double pesofunc() const override {
            int pesoTotal = 0;
            for (const auto& i : elemento)
            {
                pesoTotal += i -> pesofunc();
            }
            return pesoTotal;
        }
        string tipo() const override {
            return "Carga Estandar";
        }
        string format(string space = "") const override {
            ostringstream str;
            str << nombre() << " [" << this->capacidad << " m^3] [" << pesofunc() << " kgs]\n";
            for (const auto& i : Almacen::elemento) {
                str << i->format(space + " ");   // recorre el vector "elemento" poniendo str seguido de el espacio pasado como parametro (nulo por defecto)
            }
            return str.str(); // seguido de un espacio (" ") para que el formato sea legible
        }

        friend ostream& operator<<(ostream& os, const Camion c) { // nose porque friend xd
            os << c.format();
            return os;
        }
};


//ver como se hacia para que si no hay parametro sea de comune y si lleva parametro ea del parametro, creo que era igualandolo en el constructor
template<typename T>
class Contenedor : public Carga, public Almacen<T> {
    protected:
        string queLleva;
    public:
        Contenedor(const double& _capacidad) // quitado que lleva
        : Almacen<T>(_capacidad), Carga("Contenedor", _capacidad, 0), queLleva(_queLleva = "Comun")
        {}

        const double& pesofunc() const override {
            int pesoTotal = 0;
            for (auto elementos : Almacen<T>::elemento) peso += elementos->pesofunc();
            return pesoTotal;
        }

        const string nombre(string space = "  ") const override {
			ostringstream str;
			str << space << "Contenedor [" << Contenedor<T>::capacidad << " m3] [" << Contenedor<T>::pesofunc() << " kg] de "<< queLleva <<"\n";
			for (const auto& i : Filtro<T>::elemento)
				str << i->nombre(space + "  ");
			return str.str();
        }
};



template <typename T>
class Contenedor {
    protected:
        string tipo;
    public:
        Contenedor(const double& _capacidad)
        : tipo("Contenedor de " + typeid(T).name())
        { }
};


/*
template <typename T>
class Filtro : public Carga, public Almacen<T> {
    protected:
        string queLleva;
    public:
        Filtro(const double& _capacidad, const string _quelleva) 
        : Almacen<T>(_capacidad), Carga("Contenedor", _capacidad, 0), queLleva(_quelleva) // este que lleva lo podnrá el contenedor, según desde donde se esté creando (estandar o no)
        { }

        const double& pesofunc() const override {
            int pesoTotal = 0;
            for (auto elementos : Almacen<T>::elemento) peso += elementos->pesofunc();
            return pesoTotal;
        }

        const string nombre(string space = "  ") const override {
			ostringstream str;
			str << space << "Contenedor [" << Filtro<T>::capacidad << " m3] [" << Filtro<T>::pesofunc() << " kg] de "<< queLleva <<"\n";
			for (const auto& i : Filtro<T>::elemento)
				str << i->nombre(space + "  ");
			return str.str();
		}


};
*/

/*
template <typename T>
class Contenedor : public Filtro<T> {
	public:
		Contenedor(const double& _capacidad)
		: Filtro<T>(_capacidad, "Carga Estandar")
        { }
};

*/



// parte de tipos raros q no pueden ir con otros!!!! heredan de item y sus contenedores heredan filtro iniciado a filtro<servivo>

class SerVivo : public Item {
    public:
        SerVivo(const string& _nombre, const double& _volumen, const double& _peso)
        : Item(_nombre, _volumen, _peso)
        {}
        string tipo() const override {
            return "Seres vivos";
        }
};

class TransportaSerVivo : public Contenedor<SerVivo> {
    public:
        TransportaSerVivo(const double& _capacidad)
        : Contenedor<SerVivo>(_capacidad)
        {}
};


/*
template<>
class contenedor<Toxico>
    nombre "contenedor de toxicos"

template<>
class contenedor<yaguito> 
    nombre "contendor de yaguitos"
*/

class Toxico : public Item {
    public:
        Toxico(const string& _nombre, const double& _volumen, const double& _peso)
        : Item(_nombre, _volumen, _peso)
        {}
        string tipo() const override {
            return "Productos tóxicos";
        }
};



