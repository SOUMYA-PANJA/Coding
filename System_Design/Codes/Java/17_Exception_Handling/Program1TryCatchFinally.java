public class Program1TryCatchFinally{
    public static void main(String[] args) {
        int a = 10;
        int b = 0;
        try {
            int c = a / b;
            System.out.println(c);
        } 
        catch (ArithmeticException e) {
            System.out.println("Division by 0...");
            e.printStackTrace();
            System.out.println(e.getMessage());
        }
        catch (Exception e) {
            System.out.println("Unknown exception...");
        }
        finally { // If there is no catch block then also finally will run.
            System.out.println("All right...");
        }
    }
}