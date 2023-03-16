import java.util.Scanner;

/* 
 * Using Runnable interface for the classes we can extend another method to inherit its properties.
 * Due to which we can achieve multiple inheritance.
 * Its always a good practice to implement Runnable rather to extend Thread class. So that an option to extend a class is open.
 */

class Calc implements Runnable{
    public void run(){
        System.out.println("\nCalculating...\n");

        Scanner sc = new Scanner(System.in);
        System.out.println("Enter number 1:");
        int num1 = sc.nextInt();
        System.out.println("Enter number 2:");
        int num2 = sc.nextInt();

        System.out.println("Sum is: " + (num1 + num2));

        System.out.println("\nStop Calculating...\n");
    }
}

class Message implements Runnable{
    public void run(){
        System.out.println("\nMessaging...\n");

        for (int i = 0; i < 10; i++) {
            System.out.println("Message: " + (i + 1));
            if(i == 5){
                try {
                    Thread.sleep(5000);
                }
                catch (InterruptedException e) {
                    e.printStackTrace();
                }
            }
        }
        
        System.out.println("\nStop Messaging...\n");
    }
}

public class Program4MultipleThreadsImplementingRunnable {
    public static void main(String[] args) {

        System.out.println("Main Thread...\n");
        Calc obj1 = new Calc();
        Message obj2 = new Message();

        Thread t1 = new Thread(obj1);
        Thread t2 = new Thread(obj2);

        t1.start();
        t2.start();
    }
}
