/**
 * over
 */
class over extends inst{
    void ejecutar(Stack<int32_t> pila, int32_t pc)
    {
        int32_t tmp1 = pila.peek();
        pila.pop();
        int32_t tmp2= pila.peek();
        pila.pop();
        pila.push(tmp2);
        pila.push(tmp1);
        pila.push(tmp2);
        pc++;
    }
    
    Sting nombre()
    {
        return "swap";
    }
    
}