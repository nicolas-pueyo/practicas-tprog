#include "inst.h"
#include <stack>

class read: public inst
{
public:
    read();

public:
    void ejecutar(std::stack<int> &pila);
};