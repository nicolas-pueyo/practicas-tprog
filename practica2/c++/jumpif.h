#include "inst.h"
#include <stack>

#pragma once

class jumpif: public inst
{
protected:
	int32_t argumento;
public:
    jumpif(int32_t param);
    void ejecutar(std::stack<int> &pila, int& pc) overrides;
    string nombre() overrides; 
};
