class Example implements Runnable{
    public void run(){
        for (int i = 0; i < 3; i++) {
            System.out.println("Focus is important...");
            try {
                Thread.sleep(2000);
            }
            catch (InterruptedException e) {
                System.out.println("Interrupt Occur...");
            }
        }
    }
}

public class Program7Interrupt {
    public static void main(String[] args) {
        Example obj1 = new Example();

        Thread t1 = new Thread(obj1);
        t1.start();
        t1.interrupt(); // A thread can only be interrupted iff it is in blocked state like using sleep
    }
}
