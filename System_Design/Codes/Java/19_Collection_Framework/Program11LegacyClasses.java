/* 
 * Legacy classes are old collection classes.
 * Leagecy classes are syncronized but collection framework is not syncronized. Therefore multithreading is not achieved.
 * Enumeration can be used only in Legacy classes but iterator can be used in Legacy classes as well as collection framework.
 * Iterator can update the collection but enumeration have only read only operation.
 * Leagcy classes are not used in industry that much.
 */

import java.util.Vector;
import java.util.Enumeration;
import java.util.Iterator;

public class Program11LegacyClasses{
    public static void main(String[] args) {
        Vector v = new Vector();

        v.add(10);
        v.add(20);
        v.add(30);

        Enumeration e = v.elements();

        while(e.hasMoreElements()){
            System.out.println(e.nextElement());
        }
        System.out.println();

        Iterator i = v.iterator();

        while(i.hasNext()){
            System.out.println(i.next());
        }
    }
}