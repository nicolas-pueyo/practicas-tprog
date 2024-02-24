#include "jumpif.h"
#include <stack>
#include <iostream>
#include <string>

using namespace std;

jumpif::jumpif(int32_t param)
:	argumento(param)
{
}

void jumpif::ejecutar(stack<int32_t>& pila, int32_t& pc) const
{
	int32_t tmp = pila.top();
	pila.pop();
	if(tmp >= 0)
	{
		pc = argumento;
	}
	else pc++;
}

string jumpif::nombre() const
{
	return "jumpif " + to_string(argumento);
}
