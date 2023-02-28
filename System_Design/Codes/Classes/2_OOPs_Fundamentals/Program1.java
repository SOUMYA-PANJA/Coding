class Arith{
    static int add(int num1, int num2){
        return num1 + num2;
    }
    static int add(int num1, int num2, int num3){
        return num1 + num2 + num3;
    }
}

public class Program1 {
    public static void main(String[] args) {
        System.out.println(Arith.add(1, 2));
        System.out.println(Arith.add(1, 2, 3));
    }
    
}
