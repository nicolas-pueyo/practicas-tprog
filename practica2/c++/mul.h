#include <stack>
#include "inst.h"


class mul : public inst
{
public:
	mul();
	void ejecutar(stack<int32_t>& pila, int& pc) overrides;
	string nombre() overrides;
	
