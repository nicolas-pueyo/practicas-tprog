#include "inst.h"
#include <string>
#include <stack>

#pragma once

class write : public inst
{
public:
    void ejecutar(std::stack<int>& pila, int& pc) overrides;
    std::string nombre() overrides;
};
