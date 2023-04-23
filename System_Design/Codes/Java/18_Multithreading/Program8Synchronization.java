class Car1 implements Runnable{
    synchronized public void run(){ // synchronized keyword allows only one thread to access the run method at a time and hence prevents the race condition.
        try {
            System.out.println(Thread.currentThread().getName() + " has got into the parking lot.");
            Thread.sleep(2000);
            System.out.println(Thread.currentThread().getName() + " get into the car.");
            Thread.sleep(2000);
            System.out.println(Thread.currentThread().getName() + " begin to drive.");
            Thread.sleep(2000);
            System.out.println(Thread.currentThread().getName() + " back to the parking lot.");
            System.out.println("\n");
        }
        catch (Exception e) {
            System.out.println("Some problem occur...");
        }
    }
}

class Car2 implements Runnable{
    public void run(){
        try {
            System.out.println(Thread.currentThread().getName() + " has got into the parking lot.");
            Thread.sleep(2000);
            synchronized(this){
                System.out.println(Thread.currentThread().getName() + " get into the car.");
                Thread.sleep(2000);
                System.out.println(Thread.currentThread().getName() + " begin to drive.");
                Thread.sleep(2000);
                System.out.println(Thread.currentThread().getName() + " back to the parking lot.");
                System.out.println("\n");
            }
        }
        catch (Exception e) {
            System.out.println("Some problem occur...");
        }
    }
}

public class Program8Synchronization {
    public static void main(String[] args) {
        // For synchronized function...

        // Car1 obj1 = new Car1();

        // Thread t1 = new Thread(obj1);
        // Thread t2 = new Thread(obj1);
        // Thread t3 = new Thread(obj1);

        // t1.setName("Jack");
        // t2.setName("Sam");
        // t3.setName("Mary");

        // t1.start();
        // t2.start();
        // t3.start();

        // For synchronized block...

        Car2 obj2 = new Car2();

        Thread t4 = new Thread(obj2);
        Thread t5 = new Thread(obj2);
        Thread t6 = new Thread(obj2);

        t4.setName("Jack");
        t5.setName("Sam");
        t6.setName("Mary");

        t4.start();
        t5.start();
        t6.start();
    }
}
