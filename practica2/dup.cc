#include "dup.h"
#include <iostream>


using namespace std;

    dup::dup()    
    {    
    }  

    void ejecutar(stack<int> &pila) // el pedir un argumento detras de la función no esta implementado no se hacerlo, ver como se hace
    {
        int tmp1 = pila.top();
        pila.pop();
        pila.push(tmp1);
        pila.push(tmp1);
    }

