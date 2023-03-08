public class Question3 {
    public static void main(String[] args) {
        String str = "Think Twice";
        String []arr = str.split(" ");
        String result = "";
        for(String i : arr){
            StringBuffer strTemp = new StringBuffer(i);
            int low = 0;
            int high = strTemp.length() - 1;
            while(low < high){
                char lowIndexCharacter = strTemp.charAt(low);
                char highIndexCharacter = strTemp.charAt(high);
                strTemp.setCharAt(low, highIndexCharacter);
                strTemp.setCharAt(high, lowIndexCharacter);
                low++;
                high--;
            }
            result = result + strTemp + " ";
        }
        System.out.println(result);
    }
}
