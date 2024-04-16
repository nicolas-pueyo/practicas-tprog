public class Fichero extends Nodo {
    int tam;
    public Fichero(String _nom, int _tam) {
        super(_nom);
        tam=_tam;
    }
    
    @Override
    public int getSize() {
        return tam;
    }

    public void setTam(int _tam) {
        tam=_tam;
    } 
}
