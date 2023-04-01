import java.util.ArrayList;
import java.util.List;

public class Program2ArrayList {
    public static void main(String[] args) {
        ArrayList aL1 = new ArrayList();

        aL1.add(100);
        aL1.add(200);
        aL1.add(300);

        System.out.println("aL1 contains 200: " + aL1.contains(200));
        System.out.println("Index of 300: " + aL1.indexOf(300));
        System.out.println("Index of 400(400 not present in the aL1): " + aL1.indexOf(400));
        System.out.println("Size of aL1: " + aL1.size());
        System.out.println();

        aL1.ensureCapacity(10); // Reserves memory for atleast 10 elements
        System.out.println("Size of aL1: " + aL1.size());
        System.out.println();
        
        aL1.trimToSize(); // Trims the extra memory blocks
        System.out.println("Size of aL1: " + aL1.size());
        System.out.println();

        System.out.println("aL1: " + aL1);
        System.out.println("Clearing all data");
        aL1.clear();
        System.out.println("aL1: " + aL1);
        System.out.println();

        List aL2 = new ArrayList(); // Parent type object
        aL2.add(100);
        System.out.println("aL2: " + aL2);
    }
}
