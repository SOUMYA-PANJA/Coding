public class Program2PlusSignVSConcatMethod {
    public static void main(String[] args) {
        String str1 = "Hello";
        str1.concat("World");
        System.out.println("Str1: " + str1);
        str1 = str1.concat("World"); // Now this memory is refering to the memory in heap
        System.out.println("Str1: " + str1);
        System.out.println();

        String str2 = "Hello";
        String str3 = "World";
        String str4 = str2 + str3; // This memory is refering to the memory in heap, as used references
        String str5 = "Abc" + "Def"; // This memory is refering to the memory in SCP, as used contants
        System.out.println("Str4: " + str4);
        System.out.println("Str5: " + str5);
        System.out.println();

        String str6 = "Hello" + 100 + 90;
        System.out.println(str6);
    }
}
