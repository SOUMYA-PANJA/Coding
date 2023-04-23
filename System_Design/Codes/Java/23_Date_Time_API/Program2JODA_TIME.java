import java.time.*;

public class Program2JODA_TIME {
    public static void main(String[] args) {
        System.out.println("\n*********************************************\n");
        
        LocalTime lt1 = LocalTime.now();
        System.out.println("lt1: " + lt1);

        System.out.println("\nHrs: " + lt1.getHour());
        System.out.println("\nMin: " + lt1.getMinute());
        System.out.println("\nSec: " + lt1.getSecond());

        System.out.println("\n*********************************************\n");
        
        System.out.println("\n*********************************************\n");

        LocalDate ld1 = LocalDate.now();
        System.out.println("ld1: " + ld1);

        System.out.println("\nCurrent Month: " + ld1.getMonthValue());
        System.out.println("\nCurrent Day: " + ld1.getDayOfWeek());

        System.out.println("\n*********************************************\n");
    }
}
