#include "write.h"
#include <iostream>

using namespace std;

write::write()
{
}

void write::ejecutar(stack<int>& pila, int pc)
{
    int cima = pila.top();
    pila.pop();
    cout << cima << endl;
    pc++;
}

string write::nombre()
{
    return "write";
}
