#include "inst.h"
#include <string>
#include <stack>
#include <cstdint>

#pragma once

using namespace std;

class write : public inst
{
public:
    void ejecutar(std::stack<std::int32_t>& pila, std::int32_t& pc) const override;
    std::string nombre() const override;
};
