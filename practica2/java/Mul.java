import java.util.Stack;
/**
 * mul
 */
public class Mul extends Inst{

	@Override
    public int ejecutar(Stack<Integer> pila, int pc){
        int op1 = pila.pop();
	    int op2=pila.pop();
	    pila.push(op1*op2);
        pc++;
	    return pc;
    }

    @Override
    public String nombre(){
        return "mul";
    }

}
