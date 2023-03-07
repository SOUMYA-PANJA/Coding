import java.util.Arrays;
import java.util.Scanner;

public class Program5Anagram {
    static boolean isAnagram(String str1, String str2){
        str1 = str1.replace(" ", "").toLowerCase();
        str2 = str2.replace(" ", "").toLowerCase();

        char arr1[] = str1.toCharArray();
        char arr2[] = str2.toCharArray();

        Arrays.sort(arr1);
        Arrays.sort(arr2);

        if(Arrays.equals(arr1, arr2)){
            return true;
        }
        else{
            return false;
        }
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a string 1: ");
        String str1 = sc.nextLine();
        System.out.print("Enter a string 2: ");
        String str2 = sc.nextLine();
        System.out.println("Is Anagram Strings?  : " + isAnagram(str1, str2));
    }
}
