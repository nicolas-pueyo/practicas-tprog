#include "dup.h"
#include <iostream>
#include <stack>


using namespace std;

void dup::ejecutar(stack<int32_t> &pila, int32_t& pc) const
{
    int32_t tmp1 = pila.top();
    pila.pop();
    pila.push(tmp1);
    pila.push(tmp1);
    pc++;
}
string dup::nombre() const
{
	return "dup";
}

