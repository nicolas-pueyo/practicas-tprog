#include "read.h"
#include <iostream>
using namespace std;


read::read()
{
}

void read::ejecutar(stack<int> &pila){
    int valor;
    cout << "Dime un valor para el programa: ";
    cin >> valor;
    pila.push(valor);
}

string read::nombre()
{
    return "read";
}
