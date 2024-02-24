#include <stack>
#include <string>
#include "inst.h"

#pragma once

class over: public inst
{
	public:
	void ejecutar(std::stack<int32_t>& pila, int32_t& pc) const override;
	std::string nombre() const override;
};
