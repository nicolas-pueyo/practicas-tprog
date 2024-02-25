

/**
 * read
 */
class read extends inst{

    public void ejecutar(Stack<int32_t> pila, int32_t pc){
        int32_t valor;
        System.out.println("? ");
        System.in.read(valor);
        pila.push();
        pc++;
    }
    
    public String read(){
        return "read";
    }

}


/* 
void read::ejecutar(stack<int32_t> &pila, int32_t& pc) const{
    int32_t valor;
    cout << "? ";
    cin >> valor;
    pila.push(valor);
    pc++;
}

string read::nombre() const
{
    return "read";
}
*/