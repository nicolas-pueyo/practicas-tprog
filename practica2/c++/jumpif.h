#include "inst.h"
#include <stack>
#include <string>

#pragma once

using namespace std;

class jumpif: public inst
{
protected:
	int32_t argumento;
public:
    jumpif(int32_t param);
    void ejecutar(std::stack<int32_t> &pila, int32_t& pc) const override;
    string nombre() const 	override; 
};
