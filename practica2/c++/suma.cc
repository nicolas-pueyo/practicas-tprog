#include "suma.h"
#include <stack>
#include <cstdint>

using namespace std;


void add::ejecutar(stack<int32_t>& pila, int32_t& pc) const
{
	int32_t op1 = pila.top();
    pila.pop();
    int32_t op2 = pila.top();
    pila.pop();
    pila.push(op1+op2);
    pc++;
}

string add::nombre() const
{
	return "add";
}
