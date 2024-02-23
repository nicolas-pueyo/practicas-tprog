#include <stack>
#include <string>
#include "inst.h"

class over: public inst
{
	public:
	void ejecutar() overrides;
	string nombre() overrides;
}
