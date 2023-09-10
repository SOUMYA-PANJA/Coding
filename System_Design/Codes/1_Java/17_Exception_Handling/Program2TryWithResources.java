import java.util.Scanner;

public class Program2TryWithResources {
    public static void main(String[] args) {

        // Scanner object(or the allocated resources) will automatically be closed. No need to use finally block
        try(Scanner sc = new Scanner(System.in)){
            int a = sc.nextInt();
            System.out.println(a);
        }
        
    }
}
