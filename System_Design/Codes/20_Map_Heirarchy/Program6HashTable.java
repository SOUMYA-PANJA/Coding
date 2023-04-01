/* 
 * Hashtable has load factor of 0.75. Means if 75% of the locations got filled then the size will get doubled.
 * 
 */

import java.util.Hashtable;

public class Program6HashTable {
    public static void main(String[] args) {
        System.out.println("\n**********************************************\n");
        
        Hashtable ht1 = new Hashtable();
        
        ht1.put(1, "Hello");
        ht1.put(2, "World");
        ht1.put(3, "Hi");
        
        System.out.println("ht1: " + ht1);
        
        System.out.println("\n**********************************************\n");
    }
}
