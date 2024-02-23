#include "jumpif.h"
#include <stack>
#include <string>

jumpif::jumpif(int32_t param)
:	argumento(param)
{
}

jumpif::ejecutar(stack<int>& pila, int& pc)
{
	int tmp = pila.top();
	pila.pop();
	if(tmp >= 0)
	{
		pc = argumento;
	}
}

jumpif::nombre()
{
	return "jumpif " + to_string(argumento);
}
