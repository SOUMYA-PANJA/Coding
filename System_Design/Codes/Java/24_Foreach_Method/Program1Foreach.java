/* 
 * We can use normal for each loop also.
 */

import java.util.*;
import java.util.function.Consumer;

public class Program1Foreach {
    public static void main(String[] args) {
        System.out.println("\n**********************************************\n");

        List<Integer> al1 = Arrays.asList(1, 2, 3, 4, 10);
        System.out.println("al1: " + al1);
        
        // Consumer<Integer> fc = (n) -> System.out.println(n*2);

        Consumer<Integer> fc = new Consumer<Integer>() {
            public void accept(Integer n){
                System.out.println(n*2);
            }
        };

        System.out.println("\nUsing a consumer interface to print");
        al1.forEach(n -> System.out.println(n)); // Using consumer interface(a functional interface)

        System.out.println("\nUsing a consumer interface to print");
        al1.forEach(fc); // Using consumer interface(a functional interface)

        System.out.println("\n**********************************************\n");
    }
}