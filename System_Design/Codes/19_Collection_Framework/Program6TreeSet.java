/* 
 * Implements SortedSet interface.
 * Insertion order is not maintained.
 * Stores elements in a sorted order.
 * Duplicate values are not allowed.
 * Supports only homogeneous data.
 * Internally follows binary search tree data structure.
 * Prints using inorder traversal.
 */

import java.util.TreeSet;

public class Program6TreeSet {
    public static void main(String[] args) {
        System.out.println("\n*****************************************\n");
        
        TreeSet ts1 = new TreeSet();
        
        ts1.add(10);
        ts1.add(20);
        ts1.add(40);
        ts1.add(21);
        ts1.add(110);
        ts1.add(32);
        ts1.add(17);
        ts1.add(7);
        ts1.add(30);
        
        System.out.println("Homogeneous TreeSet(of Integers)");
        System.out.println("ts1: " + ts1);
        System.out.println();

        System.out.println("Difference between (higher, lower) and (celing, floor):");
        System.out.println();
        
        System.out.println("Value greater than 20: " + ts1.higher(20));
        System.out.println("Value lower than 20: " + ts1.lower(20));
        System.out.println("Value greater than 18: " + ts1.higher(20));
        System.out.println("Value lower than 18: " + ts1.lower(18));
        System.out.println();

        System.out.println("Celing value of 20: " + ts1.ceiling(20));
        System.out.println("Floor value of 20: " + ts1.floor(20));
        System.out.println("Celing value of 18: " + ts1.ceiling(18));
        System.out.println("Floor value of 18: " + ts1.floor(18));
        System.out.println("\n*****************************************\n");

        System.out.println("\n*****************************************\n");
        
        TreeSet ts2 = new TreeSet();
        
        ts2.add("Jack");
        ts2.add("Hello");
        ts2.add("jam");
        ts2.add("Alex");
        ts2.add("Hello");
        
        System.out.println("Homogeneous TreeSet(of strings)");
        System.out.println("ts2: " + ts2);
        System.out.println("\n*****************************************\n");

    }
}
