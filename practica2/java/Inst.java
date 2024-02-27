import java.util.Stack;

public abstract class Inst {

    public abstract int ejecutar(Stack<Integer> pila, int pc);
    public abstract String nombre();
}
