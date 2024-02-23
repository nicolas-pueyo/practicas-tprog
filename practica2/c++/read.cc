#include "read.h"
#include <iostream>
using namespace std;


read::read()
{
}

void read::ejecutar(stack<int> &pila, int& pc){
    int valor;
    cout << "? ";
    cin >> valor;
    pila.push(valor);
    pc++;
}

string read::nombre()
{
    return "read";
}
