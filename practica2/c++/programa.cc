#include <stack>
#include <iomanip>
#include "programa.h"

using namespace std;

programa::programa()
	: pc(0), numInst(0);
{
}


programa::~programa()
{
	for(auto v : instrucciones)
	{
		delete v;
	}
	delete[] instrucciones;
}

void programa::ejecutar()
{
	stack<int> pila;
	for(auto v : instrucciones)
	{
		v->ejecutar(pila, pc);
	}
}

void programa::listar()
{
	int i;
	for(auto v : instrucciones)
	{
		cout << i << "   " << v->nombre() << endl;
		i++;
	}
}

