import java.util.Stack;

public class Jumpif extends Inst{
    protected int argumento;

    public Jumpif(int param){
        argumento = param;
    }
    @Override
        public int ejecutar(Stack<Integer> pila, int pc) {
            int tmp = pila.peek();
	       pila.pop();
	       if(tmp >= 0)
	       {
	           return argumento;
	       }
           else {
               pc++;
               return pc;
           }    
        }
        @Override
        public String nombre()
        {
            return "jumpif " + Integer.toString(argumento);
        }
}
