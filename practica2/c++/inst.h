#include <stack>

# pragma once

/*
 * La clase inst, será padre de las distintas instrucciones que implementemos
 * en el programa métodos y variables comunes, para evitar la repetición de 
 * código. Además, esta clase permite crear un vector de instrucciones con varias
 * instrucciones distintas, del tipo que sean.
*/

class inst
{
protected:
    virtual void ejecutar(stack<int>& pila, int& pc) = 0;
    virtual void nombre() = 0;
 
 public:
	inst();
	~inst();
};
