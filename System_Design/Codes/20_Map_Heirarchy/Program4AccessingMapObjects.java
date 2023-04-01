import java.util.HashMap;
import java.util.Set;
import java.util.Iterator;
import java.util.Collection;
// import java.util.Map;
import java.util.Map.Entry;

public class Program4AccessingMapObjects {
    public static void main(String[] args) {
        System.out.println("\n*********************************\n");
        
        HashMap hm1 = new HashMap();

        hm1.put(1, "Hello");
        hm1.put(2,"Jack");
        hm1.put(3, "Rohan");
        hm1.put(4, "Kevin");
        hm1.put(5, "Rose");

        System.out.println("hm1: " + hm1);

        System.out.println("Getting value of key 3: " + hm1.get(3));
        
        System.out.println("\nUsing iterator concept of collection framework:");

        Set keySet = hm1.keySet();
        System.out.println("Set of keys: " + keySet);

        Set entrySet = hm1.entrySet();
        System.out.println("Set of entries: " + entrySet);

        Collection valueSet = hm1.values();
        System.out.println("Set of values: " + valueSet);

        Iterator itKeys = keySet.iterator();
        System.out.println("\nUsing Iterator to print keys:");
        while (itKeys.hasNext()) {
            Integer key = (Integer)itKeys.next();
            System.out.println(key);
        }

        Iterator itValues = valueSet.iterator();
        System.out.println("\nUsing Iterator to print values:");
        while (itValues.hasNext()) {
            String val = (String)itValues.next();
            System.out.println(val);
        }

        Iterator itEnteries = entrySet.iterator();
        System.out.println("\nUsing Iterator to print entries:");
        while (itEnteries.hasNext()) {
            // Map.Entry en = (Map.Entry)itEnteries.next();
            Entry en = (Entry)itEnteries.next();

            System.out.println(en);
            System.out.println("Key: " + en.getKey() + " Value: " + en.getValue());
            System.out.println();
        }
        
        System.out.println("\n*********************************\n");
    }
}
