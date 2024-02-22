#include "inst.h"
#include <stack>

class read: public inst
{
public:
    read();
    void ejecutar(std::stack<int> &pila);
    string nombre();
};