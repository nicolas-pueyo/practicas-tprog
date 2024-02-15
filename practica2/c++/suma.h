#include "inst.h"
#include <stack>
#include <string>

class add: public inst
{
public:
    add(); // constructor    
public:
    void ejecutar(std::stack<int>& pila);
    string nombre();

};
