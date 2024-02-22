#include "inst.h"
#include <stack>

class dup: public inst
{
public:
    dup();
    void ejecutar(std::stack<int> &pila);
};