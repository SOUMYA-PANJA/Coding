public class Program3HandlingDuckingException {
    static void fun1() throws ArithmeticException{
        System.out.println("Entering fun1");
        int b = 0;
        int c = 10/b;
        System.out.println(c);
        System.out.println("Exiting fun1");
    }
    static void fun2() throws Exception{
        System.out.println("Entering fun2");
        fun1();
        System.out.println("Exiting fun2");
    }
    public static void main(String[] args) {
        // main can also throws exceptioon by JVM will not handle the exception. and hence execution of the code will stop.
        try{
            fun2();
        }
        catch(Exception e){
            System.out.println(e);
        }
    }
}
