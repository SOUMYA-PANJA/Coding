/* 
* LinkedList internally implements list and deque interfaces.
 * LinkedList follows doubly linked list datastructure.
 * The insertion at a given index is more efficient than ArrayList.
 * LinkedList fast to manipulate data.
 * It is not syncronized.
 * Duplicate values are allowed.
 */

import java.util.LinkedList;
import java.util.List;
import java.util.Deque;

public class Program3List {
    public static void main(String[] args) {

        System.out.println("\n*****************************************\n");
        LinkedList ll1 = new LinkedList();
        
        ll1.add(100);
        ll1.add(200);
        ll1.add(300);
        
        System.out.println("Homogeneous Linked List:");
        System.out.println("ll1: " + ll1);
        System.out.println("\n*****************************************\n");

        LinkedList ll2 = new LinkedList();
        
        ll2.add("hello");
        ll2.add(12);
        ll2.add(13.2);
        ll2.add('j');
        
        System.out.println("Heterogeneous Linked List:");
        System.out.println("ll2: " + ll2);
        System.out.println();

        System.out.println("Added elements in the first and last:");
        ll2.addFirst("World");
        ll2.addLast("Last");
        System.out.println("ll2: " + ll2);
        System.out.println();
        
        System.out.println("Adding elements at a given index:");
        ll2.add(3, "Jack");
        System.out.println("ll2: " + ll2);
        System.out.println();

        System.out.println("Adding a collection:");
        ll2.addAll(2, ll1);
        System.out.println("ll2: " + ll2);
        System.out.println("\n*****************************************\n");
        
        System.out.println("\n*****************************************\n");
        System.out.println("Peek: " + ll2.peek());
        System.out.println("ll2: " + ll2);
        System.out.println();
        
        System.out.println("Poll: " + ll2.poll());
        System.out.println("ll2: " + ll2);
        System.out.println("\n*****************************************\n");
        
        
        // It is not preferred to use list or deque reference for linkedlist as you can't use the methods of deque in list and
        List ll3 = new LinkedList();
        Deque ll4 = new LinkedList();
        
        System.out.println("\n*****************************************\n");
        ll2.add(2, 8);
        ll2.add(8, 8);
        System.out.println("ll2: " + ll2);
        System.out.println("Getting element at index 3: " + ll2.get(3));
        System.out.println("Index of 300: " + ll2.indexOf(300));
        System.out.println("Last index of 8: " + ll2.lastIndexOf(8));
        System.out.println("Get first element: " + ll2.getFirst());
        System.out.println("Get last element: " + ll2.getLast());
        System.out.println();

        System.out.println("Push 123...");
        ll2.push(123);
        System.out.println("ll2: " + ll2);
        System.out.println("Pop: " + ll2.pop());
        System.out.println("ll2: " + ll2);
        System.out.println("\n*****************************************\n");
        
    }
}
