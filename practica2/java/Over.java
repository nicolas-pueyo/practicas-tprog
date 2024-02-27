import java.util.Stack;
/**
 * over
 */
public class Over extends Inst
    {

	@Override
    public int ejecutar(Stack<Integer> pila, int pc)
    {
        int tmp1 = pila.pop();
        int tmp2= pila.pop();
        pila.push(tmp2);
        pila.push(tmp1);
        pila.push(tmp2);
        pc++;
        return pc;
    }
    
    @Override
    public String nombre()
    {
        return "swap";
    }
    
}
