import java.util.Stack;
/**
 * programa
 */
public class Programa
{
	protected int pc;
	protected int numInst;
	protected Inst[] instrucciones;

    public Programa(int _inst) {
    pc = 0;
    numInst = _inst;
	instrucciones = new Inst[numInst];
    }


    public void ejecutar()
    {
        Stack<Integer> pila = new Stack<Integer>();
        pc = 0;
	    while(pc < numInst)
	    {
           // System.out.printf("%d\n", pc);
		    pc = instrucciones[pc].ejecutar(pila, pc);
           // System.out.printf("%d\n", pc);
            /*
            if(pila.empty()) {
                System.out.print("La pila está vacía\n");
            }
            else {
                System.out.printf("Cima de la pila: %d\n", pila.peek());
            }
            */
	    }
}

    public void listar()
    {
	    for(int i = 0; i< numInst; i++)
	    {
            System.out.printf("%2d   %s\n", i, instrucciones[i].nombre());
	    }
    }
}
