#include "inst.h"
#include <stack>

#pragma once

class dup: public inst
{
public:
    dup();
    void ejecutar(std::stack<int> &pila, int& pc) overrides;
    string nombre();
};
