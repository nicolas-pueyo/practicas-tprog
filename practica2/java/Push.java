import java.util.Stack;

/**
 * push
 */
public class Push extends Inst{

    private int argumento;

    public Push(int param) {argumento = param;}

	@Override
    public int ejecutar(Stack<Integer> pila, int pc){
        pila.push(argumento);
        pc++;
        return pc;
    };

	@Override
    public String nombre(){
        return "push " + Integer.toString(argumento);
    }
}
