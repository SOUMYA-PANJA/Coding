/* 
 * Insertion order is not maintained.
 * The keys gets sorted after insertion.
 */

import java.util.TreeMap;

public class Program7TreeMap {
    public static void main(String[] args) {
        System.out.println("\n**********************************************\n");
        
        TreeMap tm1 = new TreeMap();
        
        tm1.put(2, "World");
        tm1.put(1, "Hello");
        tm1.put(3, "Hi");
        
        System.out.println("tm1: " + tm1);
        
        System.out.println("\n**********************************************\n");
    }
}
