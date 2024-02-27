public class Carga {
    private String nombre;
    private double volumen;
    private double peso;
    public String nombre() {
        return nombre;
    }
    public abstract double peso();
    public double volumen() {
        return volumen;
    }
    public abstract String toString();
}