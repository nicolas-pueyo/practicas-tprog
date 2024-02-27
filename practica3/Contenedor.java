import java.util.Vector;

public class Contenedor extends Carga {
    public vector<?> objetos;
    public Contenedor(double _capacidad) {
        nombre = "Contenedor";
        volumen = _capacidad;
        objetos = new Vector<>();
        peso = 0.0;
    }
    @Override
    public double peso() {
        double weight = 0.0;
        for(Carga c : objetos) {
            weight += c.peso();
        }
        return weight;
    }
}