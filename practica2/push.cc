#include "push.h"
#include <iostream>


using namespace std;

    push::push()    
    {    
    }  

    void ejecutar(stack<int> &pila) // el pedir un argumento detras de la función no esta implementado no se hacerlo, ver como se hace
    {
        int argumento;
        cin >> argumento;

        pila.push(argumento);
    }

