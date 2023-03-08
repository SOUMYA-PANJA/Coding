public class Question1 {
    public static void main(String []args){
        String str1 = "World";
        StringBuffer str2 = new StringBuffer("Hello");
        String str12 = str1;
        StringBuffer str22 = str2;

        System.out.println("Initially: ");
        System.out.println("str1: " + str1);
        System.out.println("str2: " + str2);
        System.out.println("str12: " + str12);
        System.out.println("str22: " + str22);
        
        str1.replace("H", "A");
        str2.replace(0, 1, "A");
        
        System.out.println("Finally: ");
        System.out.println("str1: " + str1);
        System.out.println("str2: " + str2);
        System.out.println("str12: " + str12);
        System.out.println("str22: " + str22);
    }
}
