import java.util.ArrayList;

/* 
 * ArrayList implements List interface and also called dynamic array datastructure.
 * It preserves the order of insertion.
 * It is not preferred to store the objects at a given index(not efficient).
 * Elements the ArrrayList can by randomly accessed.
 * Duplicate values are allowed.
 */

public class Program1ArrayList{
    public static void main(String[] args) {

        System.out.println("\n**************************************\n");
        ArrayList aL1 = new ArrayList();
        
        // Internally it stores all elements as objects
        aL1.add(100);
        aL1.add(20);
        aL1.add(300);
        
        System.out.println("Homogeneous ArrayList:");
        System.out.println("aL1: " + aL1);
        System.out.println("\n**************************************\n");
        
        ArrayList aL2 = new ArrayList();
        
        aL2.add("Hello World");
        aL2.add(12);
        aL2.add('j');
        aL2.add(12.18);
        
        System.out.println("\n**************************************\n");
        System.out.println("Heterogeneous ArrayList:");
        System.out.println("aL2: " + aL2);
        System.out.println();
        
        aL2.add('k');
        
        System.out.println("Adding one more element to aL2:");
        System.out.println("aL2: " + aL2);
        System.out.println("\n**************************************\n");
        
        ArrayList aL3 = new ArrayList();
        
        aL3.add(10);
        aL3.add(20);
        aL3.add(30);
        
        System.out.println("\n**************************************\n");
        System.out.println("aL3: " + aL3);
        System.out.println();
        
        aL3.addAll(aL2);
        
        System.out.println("Adding a collection to a ArrayList:");
        System.out.println("aL3: " + aL3);
        System.out.println("\n**************************************\n");
        System.out.println();

        ArrayList aL4 = new ArrayList();
        
        aL4.add(10);
        aL4.add(20);
        aL4.add(30);
        
        System.out.println("\n**************************************\n");
        System.out.println("aL4: " + aL4);
        System.out.println();
        
        aL4.addAll(1, aL2);
        
        System.out.println("Adding a collection to a ArrayList at index 1:");
        System.out.println("aL4: " + aL4);
        System.out.println();

        aL4.add(3, "World");

        System.out.println("Adding an object to a ArrayList at index 3");
        System.out.println("aL4: " + aL4);
        System.out.println("\n**************************************\n");
    }
}