import java.util.Stack;


/**
 * write
 */
public class Swp extends Inst{

	@Override
    public int ejecutar(Stack<Integer> pila, int pc){
        int tmp1 = pila.pop();
	    int tmp2= pila.pop();
	    pila.push(tmp1);
	    pila.push(tmp2);
       pc++;
	    return pc;
    }

	@Override
    public String nombre(){
        return "swap";
    }
    
}

