#include <stack>
#include <string>
#include "inst.h"

class swp: public inst
{
	public:
	void ejecutar() overrides;
	string nombre() overrides;
}
