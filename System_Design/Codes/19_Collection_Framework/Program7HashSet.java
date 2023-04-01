/* 
 * HashSet implement Set interface.
 * Order of insertion is not preserved.
 * Internally uses Hash, HashTable and LinkedList data structure.
 * By default 16 location are assigned and when 75% of the space is filled then internally it double the number of loaction.
 * Duplicates not allowed.
 */

import java.util.HashSet;

public class Program7HashSet {
    public static void main(String[] args) {

        System.out.println("\n***********************************\n");
        
        HashSet hs1 = new HashSet();
        
        hs1.add(10);
        hs1.add(32);
        hs1.add(5);
        hs1.add(17);
        hs1.add(40);
        hs1.add(33);
        hs1.add(22);
        hs1.add(28);
        
        System.out.println("Homogeneous HashSet:");
        System.out.println("hs1: " + hs1);
        System.out.println("\n***********************************\n");

        System.out.println("\n***********************************\n");
        
        HashSet hs2 = new HashSet();
        
        hs2.add(10);
        hs2.add('j');
        hs2.add(5.82);
        hs2.add(17);
        hs2.add(40);
        hs2.add("Hello");
        hs2.add(22);
        hs2.add("jack");
        
        System.out.println("Heterogeneous HashSet:");
        System.out.println("hs2: " + hs2);
        System.out.println("\n***********************************\n");
    }
}
