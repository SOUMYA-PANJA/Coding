/* 
 * Order of Insertion is not maintained.
 * Values are stored based on keys.
 * If the key is already present the value is updated if used put and if used putIfAbsent then value is not changed.
 * HashTable is synchronous and don't allow null key of values.
 * Whereas HashMap is non-synchronous and allows null key and values.
 * HashTable and HashMap implements Map interface.
 */

import java.util.HashMap;

public class Program2HashMap{
    public static void main(String[] args) {
        System.out.println("\n*************************************\n");
        
        HashMap hm1 = new HashMap();

        hm1.put(1, "Rohan");
        hm1.put(2, "Jack");
        hm1.put(3, "Mohan");
        hm1.putIfAbsent(1, "Jatin");
        hm1.putIfAbsent(4, "Meena");
        
        System.out.println("hm1: " + hm1);

        System.out.println("\n*************************************\n");

        System.out.println("\n*************************************\n");

        HashMap hm2 = new HashMap();

        hm2.putAll(hm1);
        hm2.put(8, 10);
        hm2.put(1, "John");

        System.out.println("hm2: " + hm2);

        System.out.println("\n*************************************\n");

        System.out.println("\n*************************************\n");

        HashMap hm3 = new HashMap();

        hm3.put(null, null);
        hm3.put(8, 10);
        hm3.put("Hello", "John");

        System.out.println("hm3: " + hm3);

        System.out.println("\n*************************************\n");
    }
}