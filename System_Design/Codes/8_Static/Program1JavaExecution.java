/* 
 * Sequence of execution
 * 1) static variable
 * 2) static block
 * 3) static method
 * 4) non - static variable
 * 5) non - static block
 * 6) non - static method
 * 
 * 1 and 2 gets executed itself.
 * For 3, 4, 5 and 6, the programmer need to specify when to execute.
 * And JVM already have the code to execute main method.
 */

public class Program1JavaExecution{
    static int age = 10;

    static{
        int val = 20;
        System.out.println("Static Block Executed.");
    }
    public static void main(String[] args) {
        System.out.println("Main method executing.");
    }
}