#include <iostream>
#include "suma.h"
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
	cout << "Ejecución: " << endl;
	pruebas[0]->ejecutar();
	cout << endl << "Programa de cuenta atrás: " << endl;
	pruebas[1] = new progCuenta();
	cout << "Programa: " << endl;
	pruebas[1] -> listar();
	cout << endl;
	cout << "Ejecución: " << endl;
	pruebas[1] -> ejecutar();
	cout << endl;
	cout << "Programa factorial: " << endl;
	pruebas[2] = new progFactorial();
	cout << "Programa: " << endl;
	pruebas[2] -> listar();
	cout << endl;
	cout << "Ejecución: " << endl;
	pruebas[2] -> ejecutar();
	cout << endl;
}
