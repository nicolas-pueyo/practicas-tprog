#include "progFactorial.h"
#include "read.h"
#include "suma.h"
#include "write.h"
#include "dup.h"
#include "push.h"
#include "jumpif.h"
#include "mul.h"
#include "swp.h"
#include "over.h"

progFactorial::progFactorial()
: programa::programa(14)
{
	instrucciones[0] = new push(1);
	instrucciones[1] = new read();
	instrucciones[2] = new swp();
	instrucciones[3] = new over();	
	instrucciones[4] = new mul();
	instrucciones[5] = new swp();
	instrucciones[6] = new push(-1);
	instrucciones[7] = new add;
	instrucciones[8] = new dup();
	instrucciones[9] = new push(-2);
	instrucciones[10] = new add();
	instrucciones[11] = new jumpif(2);
	instrucciones[12] = new swp();
	instrucciones[13] = new write();
}
