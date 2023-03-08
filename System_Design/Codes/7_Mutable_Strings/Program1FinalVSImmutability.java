public class Program1FinalVSImmutability {
    public static void main(String[] args) {
        int a = 10;
        a = 20; // valid

        final int b = 10;
        // b = 20; // invalid

        StringBuilder s = new StringBuilder("Keep");
        System.out.println(s);
        s.append("Nothing"); // valid
        System.out.println(s);
        s = new StringBuilder("Peek"); // valid
        System.out.println(s);
        System.out.println();

        final StringBuilder sb = new StringBuilder("Hello");
        System.out.println(sb);
        sb.append("Wrold"); // valid
        System.out.println(sb);
        // sb = new StringBuilder("Not Valid"); // invalid
    }
}
