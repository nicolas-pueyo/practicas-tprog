#include <vector>
#include <iostream>
#include "inst.h"

using namespace std;

class programa
{
protected:
	vector<inst> instrucciones;
	int pc = 0;
public:
	programa();
	~programa();
	virtual void ejecutar();
	virtual void listar();
};
