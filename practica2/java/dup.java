import java.util.Stack;

/**
 * dup
 */
public class dup extends inst 
{
    public void ejecutar(Stack<int32_t> pila, int32_t pc){
    int32_t tmp1 = pila.peek();
    pila.pop();
    pila.push(tmp1);
    pila.push(tmp1);
    pc++;
    }

    string nombre(){
        return "dup";
    }
}

