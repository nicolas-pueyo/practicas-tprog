public class Producto extends Carga{
    private String nombre;
    private double peso, volumen;
    public Producto(String _nombre, double _volumen, double peso);
    public String nombre() {
        return nombre;
    }
    public double peso() {
        return peso;
    }
    public double volumen() {
        return volumen;
    }
    @Override
    public string toString() {
        return nombre + " [" + volumen + " m3] ";
    }
}