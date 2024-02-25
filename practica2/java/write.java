

/**
 * write
 */
class write extends inst{

    public void ejecutar(Stack<int32_t> pila, int32_t pc){
        int32_t cima = pila.peek();
        pila.pop();
        System.out.println(cima);
        pc++;
    }

    public String nombre(){
        return "write";
    }
    
}