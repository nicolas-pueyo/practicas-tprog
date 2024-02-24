#include "inst.h"
#include <stack>
#include <string>
#include <cstdint>

#pragma once

using namespace std;

class add: public inst
{
public:
    void ejecutar(std::stack<std::int32_t>& pila, std::int32_t& pc) const override;
    string nombre() const override;

};
