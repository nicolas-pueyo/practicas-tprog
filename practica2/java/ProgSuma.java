/**
 * progSuma
 */
public class ProgSuma extends Programa{
	public ProgSuma()
   {
      super(4);
      instrucciones[0] = new Read();
      instrucciones[1] = new Read();
      instrucciones[2] = new Suma();
      instrucciones[3] = new Write();
   }
}

    
