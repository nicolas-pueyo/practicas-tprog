public class ExcepcionYaExiste extends ExcepcionArbolFicheros {
    public ExcepcionYaExiste(String msg) {
        super("Ya existe un nodo llamado " + msg);
    }
}