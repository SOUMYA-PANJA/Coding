/* 
 * Normal comments are not useful in some cases.
 * Normal comments are avoid by the compiler.
 * 
 * But annotations are special types of comments used which is also read by the compiler.
 */

// Adding an extra method to the interface will cause error.
@FunctionalInterface
interface Fun{
    void view();
}

class Plane{
    public void fun(){
            System.out.println("Plane...");
    }
}

class CargoPlane {
    @Override
    public vodi fun(){
        System.out.println("Cargo Plane...");
    }
}

public class Program1Annotations {
    
}
