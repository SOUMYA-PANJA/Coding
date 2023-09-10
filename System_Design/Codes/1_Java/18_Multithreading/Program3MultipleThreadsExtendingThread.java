import java.util.Scanner;

class Calc extends Thread{
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

class Message extends Thread{
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

public class Program3MultipleThreadsExtendingThread {
    public static void main(String[] args) {

        System.out.println("Main Thread...\n");
        Calc t1 = new Calc();
        Message t2 = new Message();

        t1.start();
        t2.start();

        /* 
         * if we use t1.run() and t2.run() then the code will run like single thread program
         */
    }
}
