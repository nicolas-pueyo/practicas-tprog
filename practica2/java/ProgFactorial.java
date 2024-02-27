
/**
 * progFactorial 
 */
public class ProgFactorial extends Programa {
	public ProgFactorial()
	{
		super(14);
		instrucciones[0] = new Push(1);
		instrucciones[1] = new Read();
		instrucciones[2] = new Swp();
		instrucciones[3] = new Over();
		instrucciones[4] = new Mul();
		instrucciones[5] = new Swp();
		instrucciones[6] = new Push(-1);
		instrucciones[7] = new Suma();
		instrucciones[8] = new Dup();
		instrucciones[9] = new Push(-2);
		instrucciones[10] = new Suma();
		instrucciones[11] = new Jumpif(2);
		instrucciones[12] = new Swp();
		instrucciones[13] = new Write();
	}
}