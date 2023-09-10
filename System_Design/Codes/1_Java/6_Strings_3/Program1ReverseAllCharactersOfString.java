import java.util.Scanner;

public class Program1ReverseAllCharactersOfString {
    static String reverseAllCharacters(String str){
        String str_result = "";
        for (int i = str.length() - 1; i > -1; i--) {
            str_result = str_result + str.charAt(i);
        }
        return str_result;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a string: ");
        String str = sc.nextLine();
        System.out.println("Reverse String: " + reverseAllCharacters(str));
    }
}
