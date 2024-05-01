import java.util.Scanner;

public class Main {
    static int countTrailingZeros(int n){
        int res = 0;
        for (int i = 5; i <= n; i *= 5) {
            res += n / i;
        }
        return res;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a number: ");
        int n = sc.nextInt();
        System.out.println("Number of zeros in !" + n + " is: " + countTrailingZeros(n));
    }
}
