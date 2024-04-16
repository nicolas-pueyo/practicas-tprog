public class ExcepcionNotFile extends ExcepcionArbolFicheros {
    public ExcepcionNotFile(String msg) {
        super(msg + " no es un fichero");
    }
}
