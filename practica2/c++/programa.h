#include <iostream>
#include "inst.h"

using namespace std;
using InstructionPtr = inst *;

class programa
{
protected:
	Instrucciones = new InstructionPtr;
	int pc = 0;
public:
	programa();
	~programa();
	void ejecutar();
	void listar();
};
