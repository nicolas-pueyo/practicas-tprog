

/**
 * push
 */
public class push extends inst{

    private int argumento;

    



    public push(int32_t param){this.argumento = param;}

    public void ejecutar(Stack<int32_t> pila, int32_t pc){
        pila.push(argumento);
        pc++;
    }

    public String nombre(){
        return "push " + Integer.toString(argumento);
    }
}