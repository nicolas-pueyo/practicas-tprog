public abstract class Nodo {
    protected String nom;
    //protected int size;

    public Nodo(String _nom) {
        this.nom=_nom;
    }

    public String name() {
        return nom;
    }

    public abstract int getSize();
}
