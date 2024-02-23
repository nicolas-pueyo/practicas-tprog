#include <stack>
#include "inst.h"

swp::ejecutar(stack<int32_t>& pila, int& pc)
{
	int tmp1 = pila.top();
	pila.pop();
	int tmp2= pila.top();
	pila.pop();
	pila.push(tmp1);
	pila.push(tmp2);
}

swp::nombre()
{
	return "swap";
}
