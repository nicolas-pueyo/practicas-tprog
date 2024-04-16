public class Enlace extends Nodo {
    private Nodo linkedTo;

    public Enlace(Nodo linkWith, String name) {
        super(name);
        this.linkedTo = linkWith;
    }

    public Nodo getLink() {
        return linkedTo;
    }

    public int getSize() {
        return linkedTo.getSize();
    }
}