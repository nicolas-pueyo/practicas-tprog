#include "read.h"
#include <iostream>
using namespace std;


void read::ejecutar(stack<int32_t> &pila, int32_t& pc) const{
    int32_t valor;
    cout << "? ";
    cin >> valor;
    pila.push(valor);
    pc++;
}

string read::nombre() const
{
    return "read";
}
