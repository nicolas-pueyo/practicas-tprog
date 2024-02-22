#include "inst.h"
#include <string>
#include <stack>


class write : public inst
{
public:
    void ejecutar(std::stack<int>& pila);
    std::string nombre();
};
