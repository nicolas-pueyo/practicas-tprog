#include <stack>
#include <cstdint>
#include <string>

#pragma once


/*
 * La clase inst, será padre de las distintas instrucciones que implementemos
 * en el programa métodos y variables comunes, para evitar la repetición de 
 * código. Además, esta clase permite crear un vector de instrucciones con varias
 * instrucciones distintas, del tipo que sean.
*/

class inst
{
public:
    virtual void ejecutar(std::stack<std::int32_t>& pila, std::int32_t& pc) const= 0;
    virtual std::string nombre() const = 0;
};
