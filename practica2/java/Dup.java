import java.util.Stack;

/**
 * dup
 */
public class Dup extends Inst
{
    @Override
    public int ejecutar(Stack<Integer> pila, int pc){
    int tmp1 = pila.pop();
    pila.push(tmp1);
    pila.push(tmp1);
    pc++;
    return pc;
    }

    @Override
    public String nombre(){
        return "dup";
    }
}

