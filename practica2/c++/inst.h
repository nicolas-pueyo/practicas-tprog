
# pragma once

/*
 * La clase inst, será padre de las distintas instrucciones que implementemos
 * en el programa métodos y variables comunes, para evitar la repetición de 
 * código. Además, esta clase permite crear un vector de instrucciones con varias
 * instrucciones distintas, del tipo que sean.
*/

class inst
{
protected:
    virtual void ejecutar() = 0;
    virtual void listar() = 0;
};
