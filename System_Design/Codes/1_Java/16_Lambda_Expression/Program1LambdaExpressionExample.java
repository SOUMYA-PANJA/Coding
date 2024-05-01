// Lambda expression only works on functional interfaces.
// It doesn't create any class file.

/* 
 * No - parameter syntax
 * () -> {
 *  //body
 * }
 * 
 * One - parameter syntex
 * p1 -> {
 *  //body
 * }
 * 
 * Multi - parameter syntax
 * (p1, p1) -> {
 *  //body
 * }
*/

interface Car{
    void drive();
}

interface Vehicle{
    void drive(int avg);
}

interface Plane{
    void fly(int speed, String alert);
}

public class Program1LambdaExpressionExample {
    public static void main(String[] args) {
        Car obj1 = () -> System.out.println("Driving..."); // When there is one statement then curly brackets are also optional.
        obj1.drive();

        Vehicle obj2 = avg -> System.out.println("Driving..." + avg);
        obj2.drive(10);

        // We can also use different names for the variables.
        Plane obj3 = (speed, alert) -> System.out.println("Flying>>>" + speed + " and " + alert);
        /* 
        Plane obj3 = (speed, alert) -> {
            System.out.println("Flying>>>" + speed + " and " + alert);
        };
        */
        obj3.fly(300, "Safe");
    }
}
