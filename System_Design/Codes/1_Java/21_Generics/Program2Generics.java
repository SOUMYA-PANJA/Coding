import java.util.*;

class Emp{

}

public class Program2Generics{
    public static void main(String[] args) {
        ArrayList<String> al1 = new ArrayList<String>();

        List<String> l1 = new ArrayList<String>();

        Collection<String> c1 = new ArrayList<String>();

        Object o1 = new ArrayList<String>();

        // Below line is not allowed in java generics don't support upcasting.
        // ArrayList<Object> al2= new ArrayList<String>();
        
        // Below line is not allowed as primitive data types are not allowed.
        // ArrayList<int> al3= new ArrayList<int>();

        ArrayList<Emp> al4 = new ArrayList<Emp>();
        
    }
}