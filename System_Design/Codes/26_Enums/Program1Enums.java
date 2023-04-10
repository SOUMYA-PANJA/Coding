/* 
 * Used to declares constants.
 * Use captial letters(Recommended)
 * We can't instantiate an enum
 */

enum Week{
    MON, TUE, WED, THRU, FRI, SAT, SUN;
}

public class Program1Enums {
    enum Result{
        PASS, FAIL, A;
    }
    public static void main(String[] args) {
        System.out.println("\n************************************\n");
        
        Week w1 = Week.MON;
        
        System.out.println("w1: " + w1);

        int index = Week.FRI.ordinal();
        System.out.println("\nIndex of Friday: " + index);

        Week wArr[] = Week.values();
        System.out.println("\nAll weekdays...");
        for (Week w : wArr) {
            System.out.println(w.ordinal() + " --> " + w);
        }

        System.out.println("\n************************************\n");
        
        System.out.println("\n************************************\n");

        Result r1 = Result.PASS;

        System.out.println("r1: " + r1);
        
        System.out.println("\n************************************\n");
    }
}
