#include "push.h"
#include <string>


using namespace std;

push::push(int32_t param)
:	argumento(param)
{    
}  

void push::ejecutar(stack<int32_t> &pila, int32_t& pc) const
{
	pila.push(argumento);
	pc++;
}

string push::nombre() const
{
	return "push " + to_string(argumento);
}

