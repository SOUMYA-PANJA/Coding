/* 
 * Same as HashMap but order of insertion is maintained.
 * LinkedHashMap extends HashMap class.
 */

import java.util.LinkedHashMap;

public class Program3LinkedHashMap {
    public static void main(String[] args) {
        System.out.println("\n*************************************\n");
        
        LinkedHashMap lhm1 = new LinkedHashMap();

        lhm1.put(1, "Rohan");
        lhm1.put(2, "Jack");
        lhm1.put(3, "Mohan");
        lhm1.put("Hello", "Hi");
        lhm1.put("Rohit", "Jack");
        
        System.out.println("lhm1: " + lhm1);

        System.out.println("\n*************************************\n");
    }
}
