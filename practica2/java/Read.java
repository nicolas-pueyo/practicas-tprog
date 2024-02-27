import java.util.Scanner;
import java.util.Stack;
/**
 * read
 */
public class Read extends Inst{

	@Override
    public int ejecutar(Stack<Integer> pila, int pc){
        int valor;
        System.out.print("? ");
        System.out.flush();
        Scanner scanner = new Scanner(System.in);
        valor = scanner.nextInt();
        /* El tudelano que mejor programa:
        System.in.read(valor);
        * */
        pila.push(valor);
        pc++;
        return pc;
    }
    
    @Override
    public String nombre(){
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
