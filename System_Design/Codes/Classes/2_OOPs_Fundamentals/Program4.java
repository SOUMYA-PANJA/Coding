class Arith{
    static void show(char num){
        System.out.println("Char: " + num);
    }
    static void show(int num){
        System.out.println("Int: " + num);
    }
    static void show(long num){
        System.out.println("Long: " + num);
    }
}

public class Program4 {
    public static void main(String[] args) {
        byte num = 2;
        Arith.show(num); // ignored char
        Arith.show(2); // take by default int
        Arith.show('A');
    }
}