public class Program1DoubleEqualsVSEquals {
    public static void main(String[] args) {
        String str1 = "HEllo";
        String str2 = new String("HEllo");
        System.out.println(str1 == str2);
        System.out.println(str1.equals(str2));

        String str3 = new String("Hello");
        System.out.println(str1.equals(str3));
        System.out.println(str1.equalsIgnoreCase(str3));
    }
}
