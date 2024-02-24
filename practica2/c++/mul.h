#include <stack>
#include <string>
#include "inst.h"

#pragma once

using namespace std;


class mul : public inst
{
public:
	void ejecutar(stack<int32_t>& pila, int32_t& pc) const override;
	string nombre() const override;
};
