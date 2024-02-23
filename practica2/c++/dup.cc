#include "dup.h"
#include <iostream>


using namespace std;

    dup::dup()    
    {    
    }  

    void dup::ejecutar(stack<int> &pila, int& pc)
    {
        int tmp1 = pila.top();
        pila.pop();
        pila.push(tmp1);
        pila.push(tmp1);
    }
    string dup::nombre()
    {
		cout << "dup";
	}

