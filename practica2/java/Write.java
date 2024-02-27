import java.util.Stack;

/**
 * write
 */
public class Write extends Inst{

	@Override
    public int ejecutar(Stack<Integer> pila, int pc){
        int cima = pila.pop();
        System.out.println(cima);
        pc++;
        return pc;
    }

	@Override
    public String nombre(){
        return "write";
    }
    
}
