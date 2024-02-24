#include "inst.h"
#include <stack>

#pragma once

using namespace std;


class dup: public inst
{
public:
    void ejecutar(stack<int32_t> &pila, int32_t& pc) const override;
    string nombre() const override;
};
