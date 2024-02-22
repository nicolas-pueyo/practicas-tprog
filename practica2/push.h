#include "inst.h"
#include <stack>

class push: public inst
{
public:
    push();
    void ejecutar(std::stack<int> &pila);
    int argumento;
};