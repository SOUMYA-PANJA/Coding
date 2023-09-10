import java.util.ArrayList;

public class Program1TypeSafety {
    public static void main(String[] args) {
        ArrayList<String> al = new ArrayList<String>();

        al.add("Hello");
        al.add("World");

        // The below line will produce an error and provide compile type error. Saves from runtime errors.
        // al.add(10);


        String s = al.get(0); // Returns string type not object type.
        System.out.println(s);
    }
}
