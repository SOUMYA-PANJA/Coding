import java.util.Scanner;

public class Question5 {
    public static boolean Anagram(String s1, String s2){
        if (s1.length() == s2.length()) {
            for (int i = 0; i < s1.length(); i++) {
                String ch = "" + s1.charAt(i);
                if(s2.contains(ch)){
                    continue;
                }
                else{
                    return false;
                }
            }
            return true;
        }
        else {
            return false;
        }
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter string1: ");
        String s1 = sc.nextLine();
        System.out.print("Enter string2: ");
        String s2 = sc.nextLine().replace(" ", "");
        if(Anagram(s1.toLowerCase(), s2.toLowerCase())){
            System.out.println("Anagram");
        }
        else{
            System.out.println("Not anagram");
        }
    }
    
}
