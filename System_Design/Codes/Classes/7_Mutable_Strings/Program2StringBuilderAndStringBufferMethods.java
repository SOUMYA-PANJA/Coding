public class Program2StringBuilderAndStringBufferMethods {
    public static void main(String[] args) {
        System.out.println("Initial capacities: ");
        StringBuilder str1 = new StringBuilder();
        System.out.println(str1.capacity());
        StringBuffer str2 = new StringBuffer();
        System.out.println(str2.capacity());
        System.out.println();
        
        str1.append("123456789abcdefg");
        str2.append("123456789abcdefg");
        System.out.println("After adding 16 characters: ");
        System.out.println(str1.capacity());
        System.out.println(str2.capacity());
        System.out.println();
        
        str1.append("s");
        str2.append("s");
        System.out.println("After adding one more character: ");
        System.out.println(str1.capacity()); // new capacity = (initial capacity + 1) * 2
        System.out.println(str2.capacity()); // new capacity = (initial capacity + 1) * 2
        System.out.println();

        System.out.println("Length vs Capacity");
        StringBuilder str3 = new StringBuilder("123456789");
        System.out.println("Length: " + str3.length());
        System.out.println("Capacity: " + str3.capacity()); // 9 + 16 = 25
        System.out.println();
        
        System.out.println("If we add initiall 17 characters: ");
        StringBuilder str4 = new StringBuilder("123456789abcdefgs");
        System.out.println("Length: " + str4.length());
        System.out.println("Capacity: " + str4.capacity()); // 17 + 16 = 33
        System.out.println();

        System.out.println("Charater at index 1: " + str4.charAt(1));
        str4.setCharAt(1, '0');
        System.out.println(str4);
        System.out.println();

        System.out.println("Predefining capacity: ");
        StringBuilder str5 = new StringBuilder(150);
        str5.append("Hello");
        System.out.println("New Capacity: " + str5.capacity());
        System.out.println("Trimming extra spaces: ");
        str5.trimToSize();
        System.out.println("Capacity: " + str5.capacity());
        System.out.println("Length: " + str5.length());
        System.out.println();

        System.out.println(str5);
        System.out.println("Reverse: " + str5.reverse());
        System.out.println("Actual string also gets reversed: " + str5);
    }
}
