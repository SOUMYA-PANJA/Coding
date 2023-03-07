import java.util.Scanner;

public class Program3ReverseAllCharactersOfStringKeepingWordSequenceSame {
    static String reverseAllCharacters(String str){
        String str_result = "";
        for (int i = str.length() - 1; i > -1; i--) {
            str_result = str_result + str.charAt(i);
        }
        return str_result;
    }
    static String reverseAllCharactersWithSameWordSequence(String str){
        String str_result = "";
        for (String word : str.split(" ")) {
            str_result = str_result + " " + reverseAllCharacters(word);
        }
        return str_result.substring(1);
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a string: ");
        String str = sc.nextLine();
        System.out.println("Reverse String: " + reverseAllCharactersWithSameWordSequence(str));
    }
}
