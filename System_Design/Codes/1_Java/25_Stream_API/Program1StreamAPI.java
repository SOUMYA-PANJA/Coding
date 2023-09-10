/* 
 * A stream don't change the actual object.
 */

import java.util.*;
import java.util.stream.*;

public class Program1StreamAPI {
    public static void main(String[] args) {
        System.out.println("\n*******************************************\n");

        List<Integer> l1 = Arrays.asList(2, 4, 3, 5, 1, 0);

        Stream<Integer> stream1 = l1.stream();

        System.out.println("\nUsing stream to print...");
        stream1.forEach(n -> System.out.println(n*2));

        // You can't consume a stream twice.
        // stream1.forEach(n -> System.out.println(n*2));

        Stream<Integer> stream2 = l1.stream();

        System.out.println("\nCount of elements: " + stream2.count());
        
        Stream<Integer> stream3 = l1.stream();
        Stream<Integer> stream4 = stream3.sorted();

        System.out.println("\nUsed map and filter method to manipulate......");
        Stream<Integer> stream5 = stream4.map(n -> n*3);
        Stream<Integer> stream6 = stream5.filter(n -> n % 2 == 0);

        System.out.println("Sorted list....");
        stream6.forEach(n -> System.out.println(n));

        System.out.println("\nUsing map, filter and forEach in one line....");
        Stream<Integer> stream7 = l1.stream();
        stream7.filter(n -> n % 2 == 0).map(n -> n*3).forEach(n -> System.out.println(n));
        
        System.out.println("\n*******************************************\n");
    }
}
