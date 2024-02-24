#include <iostream>
#include "inst.h"

#pragma once


class programa
{
protected:
	using InstructionPtr = inst*;
	InstructionPtr* instrucciones;
	int32_t pc, numInst;
public:
	programa(int _inst = 0);
	~programa();
	void ejecutar();
	void listar();
};
