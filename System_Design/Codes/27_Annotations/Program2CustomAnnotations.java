import java.lang.annotation.ElementType;
import java.lang.annotation.Retention;
import java.lang.annotation.RetentionPolicy;
import java.lang.annotation.Target;
import java.lang.annotation.*;


/* 
 * Target: For each custom annotation you need to specify the target that where we can use the annotation.
 * Retention: Upto which level the annotation is useful.
 */
@Target({ElementType.TYPE, ElementType.METHOD})
@Retention(RetentionPolicy.RUNTIME)
@interface Cricketer{
    String country() default "India";
    int age();
}

// We can change the default values
@Cricketer(age = 28)
class Player{
    private int innings;
    private int runs;

    public int getInnings() {
        return innings;
    }

    public void setInnings(int innings) {
        this.innings = innings;
    }

    public int getRuns() {
        return runs;
    }

    public void setRuns(int runs) {
        this.runs = runs;
    }

    
}

public class Program2CustomAnnotations {
    public static void main(String[] args) {
        System.out.println("\n*********************************\n");

        Player p = new Player();

        p.setInnings(300);
        p.setRuns(300000);

        System.out.println("Innings: " + p.getInnings());
        System.out.println("Runs: " + p.getRuns());

        // Class c = p.getClass();
        // Annotation a[] = c.getAnnotations();
        // for (Annotation ann : a) {
        //     System.out.println(ann);
        // }

        Class c = p.getClass();
        Annotation a = c.getAnnotation(Cricketer.class);
        Cricketer cp = (Cricketer)a;
        System.out.println(cp.country());
        System.out.println(cp.age());


    }
}
