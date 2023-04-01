/* 
 * LinkedHashSet extendds HashSet class.
 * Order of insertion is preserved.
 * Internally uses HashTable data structure.
 * By default 16 location are assigned and when 75% of the space is filled then internally it double the number of loaction.
 * Duplicates are not allowed.
 */

import java.util.LinkedHashSet;

public class Program8LinkedHashSet {
    public static void main(String[] args) {
        
        System.out.println("\n***********************************\n");
        
        LinkedHashSet lhs1 = new LinkedHashSet();
        
        lhs1.add(10);
        lhs1.add(32);
        lhs1.add(5);
        lhs1.add(17);
        lhs1.add(40);
        lhs1.add(33);
        lhs1.add(22);
        lhs1.add(28);
        
        System.out.println("Homogeneous HashSet:");
        System.out.println("hs1: " + lhs1);
        System.out.println("\n***********************************\n");

        System.out.println("\n***********************************\n");
        
        LinkedHashSet lhs2 = new LinkedHashSet();
        
        lhs2.add(10);
        lhs2.add('j');
        lhs2.add(5.82);
        lhs2.add(17);
        lhs2.add(40);
        lhs2.add("Hello");
        lhs2.add(22);
        lhs2.add("jack");
        
        System.out.println("Heterogeneous HashSet:");
        System.out.println("hs2: " + lhs2);
        System.out.println("\n***********************************\n");
    }
}
