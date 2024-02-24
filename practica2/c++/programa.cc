#include <stack>
#include <iomanip>
#include <iostream>
#include "programa.h"

using namespace std;

programa::programa(int _inst)
	: pc(0), numInst(_inst)
{
	instrucciones = new InstructionPtr[numInst];
}


programa::~programa()
{
	for(int i = 0; i< numInst; i++)
	{
		delete instrucciones[i];
	}
}

void programa::ejecutar()
{
	stack<int32_t> pila;
	while(pc < numInst)
	{
		instrucciones[pc]->ejecutar(pila, pc);
	}
}

void programa::listar()
{
	for(int i = 0; i< numInst; i++)
	{
		cout << setw(2) << i <<  "   " << instrucciones[i]->nombre() << endl;
	}
}

