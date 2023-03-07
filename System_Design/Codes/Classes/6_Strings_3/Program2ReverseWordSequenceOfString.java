import java.util.Scanner;

public class Program2ReverseWordSequenceOfString {
    static String reverseWordSequence(String str){
        String str_result = "";
        for (String word : str.split(" ")) {
            str_result = word + " " + str_result;
        }
        return str_result;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a string: ");
        String str = sc.nextLine();
        System.out.println("Reverse String: " + reverseWordSequence(str));
    }
}
