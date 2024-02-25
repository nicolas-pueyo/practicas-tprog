import programa.java;
// no entiendo porque esta mal ngl
class progCuenta extends programa(){

	instrucciones[0] = new read();
	instrucciones[1] = new dup();
	instrucciones[2] = new write();
	instrucciones[3] = new push(-1);
	instrucciones[4] = new add();
	instrucciones[5] = new dup();	
	instrucciones[6] = new jumpif(1);
}
