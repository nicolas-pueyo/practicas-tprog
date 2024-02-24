#include "progCuenta.h"
#include "read.h"
#include "suma.h"
#include "write.h"
#include "dup.h"
#include "push.h"
#include "jumpif.h"

progCuenta::progCuenta()
: programa::programa(7)
{
	instrucciones[0] = new read();
	instrucciones[1] = new dup();
	instrucciones[2] = new write();
	instrucciones[3] = new push(-1);
	instrucciones[4] = new add();
	instrucciones[5] = new dup();	
	instrucciones[6] = new jumpif(1);
}
