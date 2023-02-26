import java.util.Scanner;
public class Question4 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a string: ");
        String str = sc.nextLine().toUpperCase();
        int arr[] = new int[26];
        for (int i = 0; i < str.length(); i++) {
            char ch = str.charAt(i);
            if(ch <= 90 && ch >= 65){
                arr[ch - 65]++;
            }
        }
        String result = "";
        for (int i = 0; i < 26; i++) {
            while (arr[i] > 0) {
                result = result + (char)(i + 65);
                arr[i]--;
            }
        }
        System.out.println(result);
    }
}
