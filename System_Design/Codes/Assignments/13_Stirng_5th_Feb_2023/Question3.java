public class Question3 {
    public static boolean palindrome(String value){
        int low = 0;
        int high = value.length() - 1;
        while (low < high) {
            if(value.charAt(low) != value.charAt(high)){
                return false;
            }
            low++;
            high--;
        }
        return true;
    }
    public static void main(String[] args) {
        String value = "2552";
        if(palindrome(value)){
            System.out.println("Palindrome.");
        }
        else{
            System.out.println("Not a palindrome.");
        }
    }    
}
