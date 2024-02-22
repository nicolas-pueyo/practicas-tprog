#include <vector>
#include "progSuma.h"
#include "read.h"
#include "suma.h"
#include "write.h"

progSuma::progSuma()
: programa::programa();
{
	instrucciones.push_back(new read());
	instrucciones.push_back(new read());
	instrucciones.push_back(new add());
	instrucciones.push_back(new write());
}
