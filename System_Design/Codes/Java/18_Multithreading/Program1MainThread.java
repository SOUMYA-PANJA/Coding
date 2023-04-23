public class Program1MainThread{
    public static void main(String[] args) {
        System.out.println("Main thread...");
        System.out.println("Before changing...");
        System.out.println("Current thread name: " + Thread.currentThread().getName());
        System.out.println("Current thread priority: " + Thread.currentThread().getPriority());
        
        Thread t = Thread.currentThread();
        t.setName("ChangedName");
        t.setPriority(1);
        System.out.println("\nAfter changing...");
        System.out.println("Current thread name: " + Thread.currentThread().getName());
        System.out.println("Current thread priority: " + Thread.currentThread().getPriority());
        
        System.out.println("\nUsing Thread object...");
        System.out.println("Current thread name: " + t.getName());
        System.out.println("Current thread priority: " + t.getPriority());
    }
}