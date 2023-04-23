/* 
 * HashMap dominates the garbage collector while WeakhashMap doesn't dominate the garbage collector. Maans that garbage collector can't collect object from HashMap while it can collect objects from WeakHashMap.
 */

import java.util.WeakHashMap;
import java.util.HashMap;

class Employee{
    private int id;
    private String name;
    
    public Employee(int id, String name) {
        this.id = id;
        this.name = name;
    }

    public int getId() {
        return id;
    }

    public String getName() {
        return name;
    }

    public String toString() {
        return "Employee [id=" + id + ", name=" + name + "]";
    }
    @Override
    public void finalize(){
        System.out.println("Cleaned...");
    }
}

public class Program8WeakHashMap {
    public static void main(String[] args) {
        System.out.println("\n**********************************\n");

        System.out.println("HashMap.........");

        Employee e1 = new Employee(1, "Jack");
        
        System.out.println("e1: " + e1);

        HashMap hm1 = new HashMap();

        hm1.put(e1, "Jack");

        System.out.println("hm1: " + hm1);
        
        e1 = null;

        System.gc(); // Garbage collector can't able to collect the object.
        
        System.out.println("hm1: " + hm1);
        
        System.out.println("End...");

        System.out.println("\n**********************************\n");
        
        System.out.println("\n**********************************\n");

        System.out.println("WeakHashMap.........");

        Employee e2 = new Employee(2, "John");
        
        System.out.println("e2: " + e2);

        WeakHashMap whm1 = new WeakHashMap();

        whm1.put(e2, "John");

        System.out.println("whm1: " + whm1);
        
        e2 = null;

        System.gc(); // Garbage collector can't able to collect the object.
        
        System.out.println("whm1: " + whm1);
        
        System.out.println("End...");

        System.out.println("\n**********************************\n");
    }
}
