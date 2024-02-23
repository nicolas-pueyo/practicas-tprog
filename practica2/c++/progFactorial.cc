#include "progFactorial.h"
#include "read.h"
#include "suma.h"
#include "write.h"
#include "dup.h"
#include "push.h"

progFactorial::progFactorial()
: programa::programa()
{
	Instrucciones[0] = new push::push(1);
	Instrucciones[1] = new read::read();
	Instrucciones[2] = new swp::swp();
	Instrucciones[3] = new over::over(-1);	
	Instrucciones[4] = new mul:mul();
	Instrucciones[5] = new swp::swp();
	Instrucciones[6] = new push::push(-1);
	Instrucciones[7] = new add:add;
	Instrucciones[8] = new dup::dup();
	Instrucciones[9] = new push::push(-2);
	Instrucciones[10] = new add::add();
	Instrucciones[11] = new jumpif::jumpif(2);
	Instrucciones[12] = new swp::swp();
	Instrucciones[13] = new write::write();
}
