import java.util.Vector;

public class Shell {
    private Directorio root;
    private Vector<Nodo> rutaActiva; 

    public Shell() {
        this.root = new Directorio("/");
        this.rutaActiva = new Vector<>();
        this.rutaActiva.add(root);
    }

    public String pwd() {
        String ruta = "";
        int ct = 0;
        boolean primero = true;
        for(Nodo node : rutaActiva) {
            if(primero) {
                primero = false;
                ruta +=node.name();
            }
            else {
                ruta += node.name() + (ct != rutaActiva.size()-1 ? "/" : "");
            }
            ct++;   
        }
        return ruta;
    }

    public String ls() {
        String lista = "";
        Nodo actual = rutaActiva.lastElement();
        if(actual instanceof Directorio) {
            lista = ((Directorio)actual).listar(); 
        }
        else if (actual instanceof Enlace) {
            if(((Enlace)actual).getLink() instanceof Directorio) { //enlace linkeado a un directorio
                lista = ((Directorio)(((Enlace)actual).getLink())).listar(); //Devolver como directorio el nodo linkado en el nodo enlace
            }
        }
        return lista;
    }

    public String du() {
        String lista = "";
        Nodo actual = rutaActiva.lastElement();
        if(actual instanceof Directorio) {
            lista = ((Directorio)actual).listarTam();
        }
        if(actual instanceof Enlace) {
            lista = ((Directorio)(((Enlace)actual).getLink())).listarTam();
        }
        return lista;
    }

    
    public void vi(String name, int size) throws ExcepcionNotFile, ExcepcionNotFound {
        Nodo actual = rutaActiva.lastElement();
        if(actual instanceof Enlace) {
            actual=(Directorio)(((Enlace)actual).getLink());
        }
        Nodo guardar = ((Directorio)actual).esta(name);
        if(guardar == null) { // no existe
            ((Directorio)actual).guardar(new Fichero(name, size));
        }
        else if(guardar instanceof Fichero) {
            ((Fichero)guardar).setTam(size);
        }
        else {
            throw new ExcepcionNotFile(guardar.name());
        }

    }   

    public void mkdir(String name) throws ExcepcionYaExiste {
        Nodo actual = rutaActiva.lastElement();
        if(actual instanceof Enlace) {
            actual = (Directorio)(((Enlace)actual).getLink());
        }
        Nodo exp = ((Directorio)actual).esta(name);
        if(exp == null) {
            ((Directorio)actual).guardar(new Directorio(name));
        }
        else {
            throw new ExcepcionYaExiste(exp.name());
        }
    }
        


    public Directorio resolvePath(String path) throws ExcepcionArbolFicheros, ExcepcionNotFound, ExcepcionNotDir , ExcepcionYaExiste {
        //gestionar antes de llamar en cada funcion
        Directorio actual = null;
        if(path.startsWith("/")) {
            actual = root;
            path = path.substring(1);
        }
        else {
            Nodo tmp = rutaActiva.lastElement();
            if(tmp instanceof Enlace) {
                actual = (Directorio)(((Enlace)tmp).getLink());
            }
            else if (tmp instanceof Directorio) {
                actual = (Directorio)tmp;
            }
        }
        //int pathLength = pathDirCount(path);
        String[] parsedPath = path.split("/"); //parseamos por barra
        //System.out.println("Post parse");
        for(int i = 0; i<parsedPath.length - 1; i++) {
            String candidato = parsedPath[i];    
            Nodo prueba = null;
            if(! candidato.equals(".")) { //si es . no se hace nada
                if(candidato.equals("..")) {
                    if(actual == root) {
                        throw new ExcepcionArbolFicheros("Ya en la raíz.");
                    }
                    rutaActiva.remove(rutaActiva.size()-1);
                    prueba = rutaActiva.lastElement();
                    if(prueba instanceof Directorio) {
                        actual = (Directorio)prueba;
                    }
                    while (prueba instanceof Enlace) {
                        if(! (((Enlace)prueba).getLink() instanceof Directorio)) {
                            rutaActiva.remove(rutaActiva.size()-1);
                            prueba = rutaActiva.lastElement();
                        }
                        else {
                            actual = ((Directorio)((Enlace)prueba).getLink());
                        }
                    }
                }
                else {
                    prueba = actual.esta(candidato);
                    if(prueba == null) {
                        throw new ExcepcionNotFound(candidato);
                    }
                    if(prueba instanceof Directorio) {
                        actual = (Directorio)prueba;
                    }
                    else if(prueba instanceof Enlace) {
                        Vector<Nodo>backup = new Vector<>();
                        backup.addAll(rutaActiva);
                        while(((Enlace)prueba).getLink() instanceof Enlace) {
                            rutaActiva.add(prueba);
                            prueba = ((Enlace)prueba).getLink();
                        }
                        if(((Enlace)prueba).getLink() instanceof Fichero) {
                            rutaActiva.clear();
                            rutaActiva.addAll(backup);
                            throw new ExcepcionNotDir(prueba.name() + " no es un directorio");
                        }
                        actual = (Directorio)(((Enlace)prueba).getLink());
                    }
                    else  {
                        throw new ExcepcionNotDir(candidato + " no es un directorio");
                    }
                }
            }
        }
        return actual;
    }

    public void cd(String path) throws ArrayIndexOutOfBoundsException, ExcepcionArbolFicheros, ExcepcionNotFound, ExcepcionNotDir{
        if(path.equals("/")) {
            rutaActiva.clear();
            rutaActiva.add(root);
        }
        else if (path.equals("..")) {
            if(rutaActiva.lastElement() != root) {
                rutaActiva.remove(rutaActiva.size()-1);
            } 
            else {
                throw new ExcepcionArbolFicheros("Ya en la raíz.");
            }
        }
        else {
            if(! path.equals("."));
            Vector<Nodo>backup = new Vector<>();
            backup.addAll(rutaActiva);
            Directorio actual = null;
            Nodo posible = null;
            actual = resolvePath(path);
            String[] parsedPath = path.split("/");
            posible = actual.esta(parsedPath[parsedPath.length-1]);  //miramos si lo que nos piden está dentro de nuestro directorio actual
            if(posible == null) {
                throw new ExcepcionNotFound(parsedPath[parsedPath.length-1]);
            }
            else if(posible instanceof Directorio) { //si es un directorio lo añadimos
                rutaActiva.add(posible);
            }
            else if(posible instanceof Enlace) { //si es un enlace
                while(((Enlace)posible).getLink() instanceof Enlace) { //miramos si está enlazado a otro enlace
                    rutaActiva.add(posible);
                    posible = ((Enlace)posible).getLink(); //iteramos mientras encontremos enlaces
                }
                if(((Enlace)posible).getLink() instanceof Fichero) { //si para porque se ha encontrado un fichero falla
                    rutaActiva = backup;
                    throw new ExcepcionNotDir(posible.name() + " no es un directorio");
                }
                else if(((Enlace)posible).getLink() instanceof Directorio) {
                    rutaActiva.add(posible);
                }
            }
            else {
                throw new ExcepcionNotDir(posible.name() + " no es un directorio.");
            }
        }
    }
    public int stat(String path) throws ArrayIndexOutOfBoundsException, ExcepcionArbolFicheros, ExcepcionNotDir, ExcepcionNotFound {
        if(path.equals("..")) {
            if(rutaActiva.lastElement() != root) {
                Nodo ver = rutaActiva.get(rutaActiva.size()-2);
                return ver.getSize();
            }
            else throw new ExcepcionArbolFicheros("Ya en la raíz.");
        }
        if(path.equals(".")) {
            Nodo ver = rutaActiva.lastElement();
            return ver.getSize();
        }
        
        int r = 0;
        Vector<Nodo>backup = new Vector<>();
        backup.addAll(rutaActiva);
        Directorio actual = null;
        actual = resolvePath(path);
        rutaActiva.clear();
        rutaActiva.addAll(backup);
        String[] parsedPath=path.split("/");
        Nodo posible = null;
        posible = actual.esta(parsedPath[parsedPath.length-1]);
        if(posible == null) {
            throw new ExcepcionNotFound(parsedPath[parsedPath.length-1]);
        }
        else {
            r=posible.getSize();
            return r;
        }
    }

    public void ln(String path, String name) throws ArrayIndexOutOfBoundsException, ExcepcionArbolFicheros, ExcepcionNotDir, ExcepcionNotFound {
    if(path.equals(".")) {
        throw new ExcepcionLinkInvalido();
    }
    if(path.equals("..")) {
        if(rutaActiva.lastElement() != root) {
            Nodo link = rutaActiva.get(rutaActiva.size()-2);
            Nodo actual = rutaActiva.lastElement();
            if(actual instanceof Directorio) {
                ((Directorio)actual).guardar(new Enlace(link,name));
            }
            else {
                ((Directorio)(((Enlace)actual).getLink())).guardar(new Enlace(link,name));
            }
        }
        else {
            throw new ExcepcionArbolFicheros("Ya en la raíz.");
        }
    }
    else {
        Vector<Nodo> backup = new Vector<>(); 
        backup.addAll(rutaActiva);
        Directorio actual = null;
        actual = resolvePath(path);
        rutaActiva.clear();
        rutaActiva.addAll(backup);
        String[] parsedPath = path.split("/");
        Nodo posible = null;
        posible = actual.esta(parsedPath[parsedPath.length-1]);
        if(posible == null) {
            throw new ExcepcionNotFound(parsedPath[parsedPath.length-1]);
        }
        else {
            Nodo guardar = rutaActiva.lastElement();
            if(guardar instanceof Enlace) {
                guardar = (Directorio)((Enlace)guardar).getLink();
            }
            else {
                guardar = (Directorio)guardar;
            }
            if(((Directorio)guardar).esta(name) == null) {
                ((Directorio)guardar).guardar(new Enlace(posible,name));
            }
            else {
                throw new ExcepcionYaExiste(name);
            }
        }
    }
}

    public void rm(String path) throws ExcepcionArbolFicheros, ExcepcionNotDir, ExcepcionNotFound {
        if(path.equals("..") || path.equals(".")) {
            throw new ExcepcionBorradoInvalido();
        }
        Vector<Nodo> backup = new Vector<>();
        backup.addAll(rutaActiva); 
        Directorio actual = null;
        actual = resolvePath(path);
        rutaActiva.clear();
        rutaActiva.addAll(backup);
        String[] parsedPath = path.split("/");
        Nodo posible = null;
        posible = actual.esta(parsedPath[parsedPath.length-1]);
        if(posible == null) {
            throw new ExcepcionNotFound(parsedPath[parsedPath.length-1]);
        }
        else {
            actual.eliminar(posible.name());
        }
    }
}