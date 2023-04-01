import java.util.ArrayList;
import java.util.Iterator;
import java.util.concurrent.CopyOnWriteArrayList; // concurrent package have class for all collections.

public class Program10FailFast {
    public static void main(String[] args) {
        ArrayList al1 = new ArrayList();

        al1.add(10);
        al1.add(20);
        al1.add(30);
        al1.add(40);

        System.out.println("For loop");
        for (int i = 0; i < al1.size(); i++) {
            System.out.println(al1.get(i));
            al1.add(i); // Concurrent modification of the collection as collection are dynamic in nature, which cause the program to get into infinite loop.
            if (i > 20){
                break;
            }
        }
        System.out.println();


        // Fail Fast
        System.out.println("Fail Fast");
        Iterator iter1 = al1.iterator();
        while (iter1.hasNext()){
            System.out.println(iter1.next());
            // al1.add(10);
            // The above line throws exception as iterator prohibits concurrent modification of the collection.
        }
        System.out.println();


        System.out.println("Fail Safe");
        CopyOnWriteArrayList al2 = new CopyOnWriteArrayList();

        al2.add(10);
        al2.add(20);
        al2.add(30);
        al2.add(40);

        // Fail Safe
        Iterator iter2 = al2.iterator();
        while (iter2.hasNext()){
            System.out.println(iter2.next());
            al2.add(10);
        }
        System.out.println(al2);
    }
}
