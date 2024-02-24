#include <vector>
#include "progSuma.h"
#include "read.h"
#include "suma.h"
#include "write.h"

progSuma::progSuma()
: programa::programa(4)
{
	instrucciones[0] = new read();
	instrucciones[1] = new read();
	instrucciones[2] = new add();
	instrucciones[3] = new write();
}
