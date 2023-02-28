class Arith{
    static void show(int num){
        System.out.println("Int: " + num);
    }
    static void show(long num){
        System.out.println("Long: " + num);
    }
}

public class Program5 {
    public static void main(String[] args) {
        Arith.show(2); // take by default int
        Arith.show('A'); // by default char

        /*
         * Automatic promotion in overloading
         * byte -> short -> int -> long -> float -> double
         * 
         * char -> int -> long -> float -> double
         */
    }
}