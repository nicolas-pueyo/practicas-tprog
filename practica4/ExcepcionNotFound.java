public class ExcepcionNotFound extends ExcepcionArbolFicheros {
    public ExcepcionNotFound(String msg) {
        super(msg + " no existe");
    }
}
