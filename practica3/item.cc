#include "item.h"
#include <string>

using namespace std;
    
Item::Item(const string& _nombre, const double& _volumen, const double& _peso)
:   name(_nombre), volume(_volumen), weight(_peso)
{}

string Item::nombre() const {
    return name;
}

double Item::peso() const {
    return weight;
}
    
double Item::volumen() const {
    return volume;
}

void Item::display(ostream& os, int ident) const {
    string identation(ident,' ');
    os << identation << name << " [" << setprecision(1) << volume << " m3] [" << weight << " kg]\n"; 
}