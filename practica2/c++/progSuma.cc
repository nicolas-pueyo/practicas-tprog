#include <vector>
#include "progSuma.h"
#include "read.h"
#include "suma.h"
#include "write.h"

progSuma::progSuma()
: programa::programa()
{
	Instrucciones[0] = new read::read();
	Instrucciones[1] = new read::read();
	Instrucciones[2] = new add::add();
	Instrucciones[3] = new write::write():
}
