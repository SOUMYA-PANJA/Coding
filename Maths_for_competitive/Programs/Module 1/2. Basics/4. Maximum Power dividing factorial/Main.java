import java.util.Scanner;

public class Main {
    static int maxPF(int a){
        int res = -1;
        for (int i = 2; i * i < a; i++) {
            while (a % i == 0) {
                res = i;
                a /= i;
            }
        }
        if (a > 1){
            res = a;
        }
        return res;
    }
    static int largestPow(int a, int fact){
        int p = maxPF(a);
        int res = 0;
        while (fact > 0) {
            fact /= p;
            res += fact;
        }
        return res;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a number: ");
        int a = sc.nextInt();
        System.out.print("Enter fact: ");
        int fact = sc.nextInt();
        System.out.println("Power of " + a + " that can divide !" + fact + " is: " + largestPow(a, fact));
    }
}
