#include <vector>
#include <iostream>
#include "inst.h"

using namespace std;

class programa
{
protected:
	vector<*inst> instrucciones;
	int pc;
public:
	programa();
	virtual void ejecutar();
	virtual void listar();
}
