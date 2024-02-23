#include "inst.h"
#include <stack>

#pragma once

class push: public inst
{
public:
    push(int32_t param);
    void ejecutar(std::stack<int> &pila, int& pc) overrides;
    int argumento;
};
