#include "carga.h"

using namespace std;

Carga::Carga(const string& _nombre, const double& _volumen, const double& _peso)
		: Item(_nombre, _volumen, _peso)
		{}

string Carga::tipo() {
    return "Carga Estandar";
}