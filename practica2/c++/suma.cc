#include "suma.h"


using namespace std;

    add::add()    
    {    
    }  

    void ejecutar(stack<int> &pila)
    {
        int op1 = pila.top();
        pila.pop();
        int op2 = pila.top();
        pila.pop();
        pila.push(op1+op2);
    }

    string nombre()
    {
        return "add";
    }