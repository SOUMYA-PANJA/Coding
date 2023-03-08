import java.util.Scanner;

public class Question2{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a string:");
        String duplicateString = sc.nextLine();
        String result = "";
        result = result + duplicateString.charAt(0);
        System.out.println("The duplicate characters in the String: ");
        for(int i = 1; i < duplicateString.length(); i++){
            String characterLower = "" + duplicateString.charAt(i);
            characterLower = characterLower.toLowerCase();
            String characterUpper = characterLower.toUpperCase();
            if(!(result.contains(characterLower) || result.contains(characterUpper))){
                result = result + duplicateString.charAt(i);
            }
            else{
                System.out.println(duplicateString.charAt(i));
            }
        }
        
    }
}