/* 
 * Collection and Collections are different.
 */

import java.util.Collections;
import java.util.ArrayList;

public class Program4Collections {
    public static void main(String[] args) {
        System.out.println("\n**************************************\n");

        ArrayList<Integer> al1 = new ArrayList<Integer>();
        
        al1.add(10);
        al1.add(5);
        al1.add(7);
        al1.add(15);
        al1.add(11);
        al1.add(12);
        al1.add(2);
        al1.add(4);
        al1.add(9);
        
        System.out.println("al1: " + al1);
        
        Collections.sort(al1);
        
        System.out.println("al1: " + al1);
        
        int index = Collections.binarySearch(al1, 11);
        System.out.println("11 found at index: " +  index);
        
        index = Collections.binarySearch(al1, 6);
        System.out.println("6 found at index: " +  index);
        
        System.out.println();
        
        System.out.println("al1: " + al1);
        Collections.rotate(al1, 3);
        System.out.println("After rotating...");
        System.out.println("al1: " + al1);
        
        System.out.println();
        
        System.out.println("al1: " + al1);
        Collections.shuffle(al1);
        System.out.println("After shuffling...");
        System.out.println("al1: " + al1);
        
        System.out.println();
        
        al1.add(15);
        int freq = Collections.frequency(al1, 15);
        System.out.println("al1: " + al1);
        System.out.println("Frequency of 15: " + freq);

        System.out.println("\n**************************************\n");

        System.out.println("\n**************************************\n");
        
        ArrayList<String> al2 = new ArrayList<String>();

        al2.add("Hello");
        al2.add("Alex");
        al2.add("James");

        System.out.println("al2: " + al2);

        Collections.sort(al2);
        
        System.out.println("al2: " + al2);

        System.out.println("\n**************************************\n");
    }
}
