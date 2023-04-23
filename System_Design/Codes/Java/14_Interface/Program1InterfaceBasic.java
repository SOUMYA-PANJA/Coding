/* 
 * Interface:
 * 
 * Interface allows only abstract methods.
 * It can't be instantiated.
 * Variables are by default "public static final".
 * Methods are by default "public and abstract".
 * It can't have constructors.
*/

interface A{
    int val = 10; // Have to specify value as variables are final. And no need to specify public static final in the beginning.
    void show();

    // After java 7 from java 8 we can create default methods having default implementation. We may or may not write the implementation in the subsequent subclasses.
    default void config(){
        System.out.println("Config default.");
    }
    
    //We also have static declaration so that we can call the method without any object instantiation.
    static void call(){
        System.out.println("Calling static.");
    }
}

interface C{
    void abc();
}

class B implements A{
    public void show(){ // Need to write public. Can't reduce the visibility of the method. And we have to implement the method or else it will show an error.
        System.out.println("Hello World...");
    }
    public void abc(){
        System.out.println("In abc...");
    }
}

public class Program1InterfaceBasic{
    public static void main(String[] args) {
        System.out.println(A.val); // can access the value but can't change the value.
        A.call(); // Calling static mehthod from interface

        B obj1 = new B();
        obj1.show();
        obj1.abc();
        obj1.config();

        A obj2 = new B();
        obj2.show();
        obj2.config();
        // obj2.abc(); // Can't call abc as the reference is of A. And A don't know about abc method.
    }
}