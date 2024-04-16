public class ExcepcionNotDir extends ExcepcionArbolFicheros {
    public ExcepcionNotDir(String msg) {
        super(msg + "no es un directorio.");
    }
}
