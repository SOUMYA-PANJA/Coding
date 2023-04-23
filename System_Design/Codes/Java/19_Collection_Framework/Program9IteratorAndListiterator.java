/* 
 * Iterator can be used for any collection.
 * ListIterator implements Iterator interface.
 * Using ListInterator we can iterate in reverse order.
 * ListIterator can be used only for List implementations.
 */

import java.util.ArrayList;
import java.util.HashSet;
import java.util.Iterator;
import java.util.ListIterator;

public class Program9IteratorAndListiterator {
    public static void main(String[] args) {

        System.out.println("\n*******************************\n");

        ArrayList al1 = new ArrayList();
        
        al1.add(10);
        al1.add("World");
        al1.add('j');
        al1.add(3432.22);
        al1.add(50);
        
        // Using for loop for collections having indexing.
        System.out.println("Iterating ArrayList using for loop:");
        for (int i = 0; i < al1.size(); i++) {
            System.out.println(al1.get(i));
        }
        System.out.println("\n*******************************\n");

        System.out.println("\n*******************************\n");
        
        HashSet hs1 = new HashSet();
        
        hs1.add(10);
        hs1.add("Hello");
        hs1.add(20);
        hs1.add("Jam");
        hs1.add('j');
        hs1.add(18);
        
        
        // Using for each loop for collections not having indexing.
        System.out.println("Iterating HashSet using for-each loop:");
        for (Object o : hs1) {
            System.out.println(o);
        }
        System.out.println("\n*******************************\n");
        
        System.out.println("\n*******************************\n");
        
        System.out.println("Using Iterator...");
        System.out.println();

        Iterator iter = hs1.iterator();
        
        System.out.println("Iterating HashSet using iterator.");
        while (iter.hasNext()) {
            System.out.println(iter.next()); // The next function returns an Object so if we try to store it we need to downcast it. As Object is the super class of all class.
        }
        System.out.println("\n*******************************\n");
        
        System.out.println("\n*******************************\n");
        
        System.out.println("Using ListIterator...");
        System.out.println();

        ListIterator liter = al1.listIterator(al1.size());
        
        System.out.println("Iterating ArrayList using ListIterator.");
        while (liter.hasPrevious()) {
            System.out.println(liter.previous()); // The previous function returns an Object so if we try to store it we need to downcast it. As Object is the super class of all class.
        }
        System.out.println("\n*******************************\n");
    }
}
