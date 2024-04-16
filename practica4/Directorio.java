import java.util.TreeMap;

public class Directorio extends Nodo {

    private TreeMap<String,Nodo> contenido;

    public Directorio(String _name) {
        super(_name);
        this.contenido = new TreeMap<>();
    }

    public TreeMap<String, Nodo> contenidos() {
        return contenido;
    }


    public void guardar(Nodo e) {
        Nodo posible = contenido.get(e.name());
        if(posible == null) {
            contenido.put(e.name(), e);
        }
    }

    @Override
    public int getSize() {
        int size= 0;
        for(Nodo el : contenido.values()) {
            size += el.getSize();
        }
        return size;
    }

    public String listar() {
        String vals = "";
        boolean primero = true;
        for(Nodo el : contenido.values()) {
            if(primero) {
                primero = false;
                vals = el.name();
            }
            else {
                vals += "\n" + el.name();
            }
        }
        return vals;
    }



    public String listarTam() {
        String vals = "";
        boolean primero = true;
        for(Nodo el : contenido.values()) {
            if(primero) {
                primero = false;
                vals = el.name() + " " + el.getSize();
            }
            else {
                vals += "\n" + el.name() + " " + el.getSize();
            }
        }
        return vals;
    }

    public Nodo esta(String si) {
        Nodo posible = contenido.get(si);
        if(posible!= null) {
            return posible;
        }
        else {
            return null;
        }
    }

    public void eliminar(String name) {
        contenido.remove(name);
    }
}
