#include <stack>
#include <string>
#include "swp.h"

using namespace std;

void swp::ejecutar(stack<int32_t>& pila, int32_t& pc) const
{
	int32_t tmp1 = pila.top();
	pila.pop();
	int32_t tmp2= pila.top();
	pila.pop();
	pila.push(tmp1);
	pila.push(tmp2);
	pc++;
}

string swp::nombre() const
{
	return "swap";
}
