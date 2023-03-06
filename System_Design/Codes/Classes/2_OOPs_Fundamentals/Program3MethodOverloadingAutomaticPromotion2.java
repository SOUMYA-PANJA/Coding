class Arith{
    static void show(short num){
        System.out.println("Short: " + num);
    }
    static void show(int num){
        System.out.println("Int: " + num);
    }
    static void show(long num){
        System.out.println("Long: " + num);
    }
}

public class Program3MethodOverloadingAutomaticPromotion2 {
    public static void main(String[] args) {
        byte num = 2;
        Arith.show(num); // promoted to short
        Arith.show(2); // take by default int
    }
}