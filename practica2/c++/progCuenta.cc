#include <vector>
#include "progCuenta.h"
#include "read.h"
#include "suma.h"
#include "write.h"
#include "dup.h"
#include "push.h"

progCuenta::progCuenta()
: programa::programa()
{
	Instrucciones[0] = new read::read();
	Instrucciones[1] = new dup::dup();
	Instrucciones[2] = new write::write();
	Instrucciones[3] = new push::push(-1);
	Instrucciones[4] = new add:add();
	Instrucciones[5] = new dup::dup();
	Instrucciones[6] = new jumpif::jumpif(1);
}
