import inst.java;
/**
 * programa
 */
class programa 
{
    public programa(int _inst) {
    pc = 0;
    numInst = _inst;
	instrucciones = new InstructionPtr[numInst];
    }


    public void ejecutar()
    {
	    Stack<int32_t> pila;
	    while(pc < numInst)
	    {
		    instrucciones[pc].ejecutar(pila, pc);
	    }
}

    public void listar()
    {
	    for(int i = 0; i< numInst; i++)
	    {
            System.out.printf("%2D", instrucciones[i].nombre());
	    }
    }
}