import java.util.Scanner;
import java.lang.Math;;

public class Main {
    static int countDigits(int n){
        return (int)(Math.log10((double)n) + 1);
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a number: ");
        int n = sc.nextInt();
        System.out.println("Number of digits in " + n + " is: " + countDigits(n));
    }
}
