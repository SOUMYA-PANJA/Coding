public class Program1MutableImmutableString{
    public static void main(String[] args) {
        String str = "Hello";
        System.out.println(str);
        str.concat("World");
        System.out.println(str);

        StringBuilder mutable_str = new StringBuilder("Hello");
        System.out.println(mutable_str);
        mutable_str.append("World");
        System.out.println(mutable_str);
    }
}