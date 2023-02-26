import java.util.Scanner;

public class Question7 {

    public static boolean checkAllUnique(String s){
        String temp = "" + s.charAt(0);
        for (int i = 1; i < s.length(); i++) {
            String chAt = "" + s.charAt(i);
            if(temp.contains(chAt)){
                return true;
            }
            temp = temp + s.charAt(i);
        }
        return false;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a string: ");
        String str = sc.nextLine().toLowerCase().replace(" ", "");
        if(checkAllUnique(str)){
            System.out.println("Contains Duplicates.");
        }
        else{
            System.out.println("Don't contains duplicates");
        }
    }
}
