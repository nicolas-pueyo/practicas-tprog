#include <vector>
#include <stack>
#include "programa.h"

using namespace std;

programa::programa()
	: pc(0)
{	
	instrucciones.resize(0);
}


programa::~programa(){
// añadir destructor
}

void programa::ejecutar()
{
	stack<int> pila;
	for(const auto& instrucciones : v)
	{
		v->ejecutar(pila);
	}
}

void programa::listar()
{
	int i;
	for(const auto& instrucciones : v)
	{
		cout << i << " " << v->listar() << endl;
		i++;
	}
}

