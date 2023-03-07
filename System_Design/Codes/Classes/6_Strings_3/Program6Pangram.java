import java.util.Scanner;

public class Program6Pangram {
    static boolean isPangram(String str){
        str = str.replace(" ", "").toUpperCase();
        int arr[] = new int[26];
        for (int i = 0; i < str.length(); i++) {
            arr[str.charAt(i) - 65]++;
        }
        for (int i = 0; i < arr.length; i++) {
            if(arr[i] == 0){
                return false;
            }
        }
        return true;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a string: ");
        String str = sc.nextLine();
        System.out.println("Is Palindrome String?  : " + isPangram(str));
    }
}
