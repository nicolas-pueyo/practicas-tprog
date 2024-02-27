public class ProgCuenta extends Programa
{
	public ProgCuenta()
	{
		super(7);
		instrucciones[0] = new Read();
		instrucciones[1] = new Dup();
		instrucciones[2] = new Write();
		instrucciones[3] = new Push(-1);
		instrucciones[4] = new Suma();
		instrucciones[5] = new Dup();
		instrucciones[6] = new Jumpif(1);
	}
}
