/* 
 * Implements Queue interface.
 * Adds elements the rear end.
 * Order of insertion is not preserved neither the data is sorted.
 * Stores data using min-heap datastructure.
 * Supports only homogeneous data.
 * Duplicate values are allowed.
 * Doesn't allow null values.
 */

import java.util.PriorityQueue;

public class Program5PriorityQueue {
    public static void main(String[] args) {
        System.out.println("\n********************************\n");
        
        PriorityQueue pq1 = new PriorityQueue();
        
        pq1.add(10);
        pq1.add(20);
        pq1.add(40);
        pq1.add(21);
        pq1.add(110);
        pq1.add(32);
        pq1.add(17);
        pq1.add(7);
        pq1.add(30);
        
        System.out.println("Homogeneous PriorityQueue(of integers):");
        System.out.println("pq1: " + pq1);
        System.out.println("\n********************************\n");

        System.out.println("\n********************************\n");
        
        PriorityQueue pq2 = new PriorityQueue();
        
        pq2.add("Jack");
        pq2.add("Hello");
        pq2.add("jam");
        pq2.add("Alex");
        
        System.out.println("Homogeneous PriorityQueue(of strings):");
        System.out.println("pq2: " + pq2);
        System.out.println("\n********************************\n");
    }
}
