
/**
 * mul
 */
class mul extends inst{
    public void ejecutar(Stack<int32_t> pila, int32_t pc){
        int32_t op1 = pila.peek();
	    pila.pop();
	    int32_t op2=pila.peek();
	    pila.pop();
	    pila.push(op1*op2);
	    pc++;
    }
    public String nombre(){
        return "mul";
    }

}