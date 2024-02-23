#include <stack>
#include "mul.h"

mul::ejecutar(stack<int32_t>& pila, int& pc)
{
	int op1 = pila.top();
	pila.pop();
	int op2=pila.top();
	pila.pop();
	pila.push(op1*op2);
}

string mul::nombre()
{
	return "mul";
}
