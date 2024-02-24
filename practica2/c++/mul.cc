#include <stack>
#include "mul.h"
#include <string>

using namespace std;

void mul::ejecutar(stack<int32_t>& pila, int32_t& pc) const
{
	int32_t op1 = pila.top();
	pila.pop();
	int32_t op2=pila.top();
	pila.pop();
	pila.push(op1*op2);
	pc++;
}

string mul::nombre() const
{
	return "mul";
}
