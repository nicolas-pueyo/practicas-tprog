#include <stack>
#include "over.h"
#include <string>

using namespace std;

void over::ejecutar(stack<int32_t>& pila, int32_t& pc) const
{
	int32_t tmp1 = pila.top();
	pila.pop();
	int32_t tmp2= pila.top();
	pila.pop();
	pila.push(tmp2);
	pila.push(tmp1);
	pila.push(tmp2);
	pc++;
}

string over::nombre() const
{
	return "swap";
}
