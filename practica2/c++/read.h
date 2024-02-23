#include "inst.h"
#include <stack>

class read: public inst
{
public:
    read();
    void ejecutar(std::stack<int> &pila, int& pc) overrides;
    string nombre() overrides;
};
