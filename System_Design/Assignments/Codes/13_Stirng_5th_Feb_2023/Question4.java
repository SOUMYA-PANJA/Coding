import java.util.Scanner;

public class Question4 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String vowels = "aeiou";
        String consonents = "bcdfghjklmnpqrstvwxyz";
        int countVowels = 0;
        int countConsonents = 0;
        int countSpecial = 0;
        System.out.print("Enter a string: ");
        String value = sc.nextLine().toLowerCase();
        for (int i = 0; i < value.length(); i++) {
            String characterAt = "" + value.charAt(i);
            if(vowels.contains(characterAt)){
                countVowels++;
            }
            else if(consonents.contains(characterAt)){
                countConsonents++;
            }
            else{
                countSpecial++;
            }
        }
        System.out.println("Number of vowels: " + countVowels);
        System.out.println("Number of consonents: " + countConsonents);
        System.out.println("Number of special characters: " + countSpecial);
    }
}
