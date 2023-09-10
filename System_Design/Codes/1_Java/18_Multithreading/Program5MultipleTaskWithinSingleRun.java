import java.util.Scanner;

class MyThread extends Thread{

    public void run(){
        String tName = Thread.currentThread().getName();

        if(tName.equals("Calc")){
            this.calc();
        }
        else{
            this.msg();
        }
    }

    public void calc(){
        System.out.println("\nCalculating...\n");

        Scanner sc = new Scanner(System.in);
        System.out.println("Enter number 1:");
        int num1 = sc.nextInt();
        System.out.println("Enter number 2:");
        int num2 = sc.nextInt();

        System.out.println("Sum is: " + (num1 + num2));

        System.out.println("\nStop Calculating...\n");
    }

    public void msg(){
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

public class Program5MultipleTaskWithinSingleRun {
    public static void main(String[] args) {
        Thread t1 = new MyThread();
        Thread t2 = new MyThread();
        t1.setName("Calc");
        t2.setName("Message");

        t1.start();
        t2.start();
    }
}
