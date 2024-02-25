

class jumpif extends inst{
    protected int32_t argumento;

    public jumpif(int32_t param){
        argumento = param;
    }
    public void ejecutar(Stack<int32_t> pila, int32_t pc) {
        int32_t tmp = pila.peek();
	    pila.pop();
	    if(tmp >= 0)
	    {
	    	pc = argumento;
	    }
	    else pc++;
        }
    
        public string nombre(){
            return "jumpif " + int32_t.toString(argumento);
    }
}