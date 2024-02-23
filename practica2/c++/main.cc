#include <iostream>
#include "add.h"
#include "read.h"
#include "write.h"
#include "push.h"
#include "dup.h"
#include "jumpif.h"
#include "mul.h"
#include "swp.h"
#include "over.h"
#include "progSuma.h"
#include "progCuenta.h"
#include "progFactorial.h"

int main(int argc, char* argv[])
{
	programa* pruebas[3];
	cout << "Programa de suma: " << endl;
	pruebas[0] = new progSuma();
	cout << "Programa: " << endl;
	pruebas[0]->listar();
	cout << endl;
	pruebas[0]->ejecutar();
}
