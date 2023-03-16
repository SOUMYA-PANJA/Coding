/* 
 * Don't run this program, this will cause deadlock
 */

class Library implements Runnable{
    String res1 = new String("Java");
    String res2 = new String("SQL");
    String res3 = new String("DSA");

    public void run(){
        String tName = Thread.currentThread().getName();
        if(tName.equals("Student1")){
            try{
                Thread.sleep(3000);
                synchronized(res1){
                    System.out.println("Student1 has taken book of " + res1);
                    Thread.sleep(3000);
                    synchronized(res2){
                        System.out.println("Student1 has taken book of " + res2);
                        Thread.sleep(3000);
                        synchronized(res3){
                            System.out.println("Student1 has taken book of " + res3);
                            Thread.sleep(3000);
                        }
                    }
                }
            }
            catch(Exception e){
                System.out.println("Some problem occur...");
            }
        }
        else{
            try{
                Thread.sleep(3000);
                synchronized(res3){
                    System.out.println("Student2 has taken book of " + res3);
                    Thread.sleep(3000);
                    synchronized(res2){
                        System.out.println("Student2 has taken book of " + res2);
                        Thread.sleep(3000);
                        synchronized(res1){
                            System.out.println("Student2 has taken book of " + res1);
                            Thread.sleep(3000);
                        }
                    }
                }
            }
            catch(Exception e){
                System.out.println("Some problem occur...");
            }
        }
    }
}

public class Program9Deadlock {
    public static void main(String[] args) {
        Library lib1 = new Library();

        Thread t1 = new Thread(lib1);
        Thread t2 = new Thread(lib1);

        t1.setName("Student1");
        t2.setName("Student2");

        t1.start();
        t2.start();
    }
}
