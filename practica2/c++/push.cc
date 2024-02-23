#include "push.h"
#include <iostream>


using namespace std;

push::push(int32_t param)
:	argumento(param);    
{    
}  

void push::ejecutar(stack<int> &pila)
{
	pila.push(argumento);
}

