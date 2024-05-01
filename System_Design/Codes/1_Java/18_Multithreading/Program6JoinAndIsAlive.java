class Printing implements Runnable{
    public void run(){
        try {
            for (int i = 0; i < 3; i++) {
                System.out.println("Focus is important...");
                Thread.sleep(3000);
            }
        }
        catch (Exception e) {
            System.out.println("Some problem...");
        }
    }
}

public class Program6JoinAndIsAlive {
    public static void main(String[] args) {
        System.out.println("Main Thread Started...");
        
        Printing obj1 = new Printing();

        Thread t1 = new Thread(obj1);
        System.out.println("Is the thread alive before starting: " + t1.isAlive());
        
        t1.start();
        System.out.println("Is the thread alive after starting and before joining: " + t1.isAlive());
        try {
            t1.join();
            // If you omit this line then first main thread will complete executing then t1 starts executing.
        }
        catch (InterruptedException e) {
            e.printStackTrace();
        }
        System.out.println("Is the thread alive after joining: " + t1.isAlive());

        System.out.println("Main Thread Finished...");
    }
}
