public class Program2WaysToCreateImmutableStrings {
    public static void main(String[] args) {
        String str1 = "HEllo"; // Created in string constant pool, duplicates not allowed
        System.out.println(str1);
        String str2 = new String("Hello"); // Created in heap area, duplicated allowed
        System.out.println(str2);
        
        char ch[] = {'H', 'e', 'l'};
        String str3 = new String(ch);
        System.out.println(str3);
    }
}
