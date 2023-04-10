// import java.util.Date;
// import java.sql.Date;

/* 
 * The above two classes are not efficient, so in java8 they introduced new package time also call JODA-TIME package.
 */

public class Program1Date{
    public static void main(String[] args) {
        System.out.println("\n*********************************************\n");
        
        java.util.Date dt1 = new java.util.Date();
        
        System.out.println("dt1: " + dt1);

        long timeInMs = dt1.getTime();
        
        java.sql.Date dt2 = new java.sql.Date(timeInMs);
        
        System.out.println("dt2: " + dt2);

        System.out.println("\n*********************************************\n");
    }
}