public class Question2 {
    public static void main(String[] args) {
        StringBuffer str = new StringBuffer("PWSKILLS");
        int low = 0;
        int high = str.length() - 1;
        while(low < high){
            char lowIndexCharacter = str.charAt(low);
            char highIndexCharacter = str.charAt(high);
            str.setCharAt(low, highIndexCharacter);
            str.setCharAt(high, lowIndexCharacter);
            low++;
            high--;
        }
        System.out.println(str);
    }
}
