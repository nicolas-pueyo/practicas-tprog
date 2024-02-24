#include "write.h"
#include <iostream>
#include <cstdint>

using namespace std;

void write::ejecutar(stack<int32_t>& pila, int32_t& pc) const
{
    int32_t cima = pila.top();
    pila.pop();
    cout << cima << endl;
    pc++;
}		

string write::nombre() const
{
    return "write";
}
