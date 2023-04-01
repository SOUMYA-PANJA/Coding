/* 
 * Implements deque interface.
 * Based on indexing operations can't be performed.
 * Internally follows doubly ended queue.
 * Duplicate values are allowed.
 */

import java.util.ArrayDeque;

public class Program4ArrayDeque {
    public static void main(String[] args) {
        
        System.out.println("\n*******************************\n");
        ArrayDeque ad1 = new ArrayDeque();
        
        ad1.add(10);
        ad1.add(20);
        System.out.println("Homogeneous ArrayDeque:");
        System.out.println("ad1: " + ad1);
        System.out.println("\n*******************************\n");

        System.out.println("\n*******************************\n");
        ArrayDeque ad2 = new ArrayDeque();
        
        ad2.add(10);
        ad2.add("Hello");
        ad2.add('j');
        ad2.add(323.123);

        System.out.println("Heterogeneous ArrayDeque:");
        System.out.println("ad2: " + ad2);
        System.out.println();
        
        System.out.println("Adding element at first and last...");
        ad2.addFirst("First");
        ad2.addLast("Last");
        System.out.println("ad2: " + ad2);
        System.out.println();
        
        System.out.println("Using offer:");
        System.out.println("ad2: " + ad2);
        
        // If you use offer data may add or reject the element.
        ad2.offer(400);
        ad2.offerFirst(1);
        ad2.offerLast(2);
        System.out.println("ad2: " + ad2);
        
        System.out.println("\n*******************************\n");
    }
}
