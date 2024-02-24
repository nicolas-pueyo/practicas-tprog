#include "inst.h"
#include <stack>
#include <string>
#include <cstdint>

#pragma once

class push: public inst
{
public:
    push(int32_t param);
    void ejecutar(std::stack<int32_t> &pila, std::int32_t& pc) const override;
    std::string nombre() const override;
    std::int32_t argumento;
};
