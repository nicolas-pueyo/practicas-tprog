#include "inst.h"
#include <stack>
#include <string>

#pragma once

class add: public inst
{
public:
    add(); // constructor    
    void ejecutar(std::stack<int>& pila) overrides;
    string nombre() overrides;

};
