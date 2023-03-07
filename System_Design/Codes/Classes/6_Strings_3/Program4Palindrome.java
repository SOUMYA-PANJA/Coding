import java.util.Scanner;
public class Program4Palindrome {
    static boolean isPalindrome(String str){
        int low = 0;
        int high = str.length() - 1;
        while (low < high) {
            if(str.charAt(low) != str.charAt(high)){
                return false;
            }
            low++;
            high--;
        }
        return true;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a string: ");
        String str = sc.nextLine();
        System.out.println("Is Palindrome String?  : " + isPalindrome(str));
    }    
}
