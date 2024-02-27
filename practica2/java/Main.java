

public class Main
	{
		public static void main(String[] args)
		{
			Programa[] pruebas = new Programa[3];
			System.out.println("Programa de suma:");
			pruebas[0] = new ProgSuma();
			System.out.println("Programa:");
			pruebas[0].listar();
			System.out.println("");
			System.out.println("Ejecución:");
			pruebas[0].ejecutar();
			System.out.println("");
			System.out.println("Programa de cuenta:");
			pruebas[1] = new ProgCuenta();
			System.out.println("Programa:");
			pruebas[1].listar();
			System.out.println("");
			System.out.println("Ejecucion:");
			pruebas[1].ejecutar();
			System.out.println("");
			System.out.println("Programa de factorial:");
			pruebas[2] = new ProgFactorial();
			System.out.println("Programa:");
			pruebas[2].listar();
			System.out.println("");
			System.out.println("Ejecucion:");
			pruebas[2].ejecutar();
			System.out.println("");
		}
	}
