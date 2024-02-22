#include "write.h"
#include <iostream>

using namespace std;

void write::ejecutar(stack<int>& pila)
{
    int cima = pila.top();
    pila.pop();
    cout << cima << endl;
}

string write::nombre()
{
    return "write";
}