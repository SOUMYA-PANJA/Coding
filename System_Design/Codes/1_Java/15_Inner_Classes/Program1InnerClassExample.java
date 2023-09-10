/* 
 * Inner class:
 * 1) Member class
 * 2) Static class (Only an inner class can be static)
 * 3) Annonymous class
*/

class Person{

    // Static inner class
    static class Address{
        void staticClass(){
            System.out.println("Static class function.");
            System.out.println("----------------");
        }
    }

    // Member inner class
    class Employee{
        void memberClass(){
            System.out.println("Member class function.");
            System.out.println("----------------");
        }
    }

    void parentClass(){
        System.out.println("Parent class function.");
        System.out.println("----------------");
    }
}

public class Program1InnerClassExample {
    public static void main(String[] args) {
        Person obj1 = new Person();
        obj1.parentClass();
        
        Person.Employee obj2 = obj1.new Employee(); // Member class
        obj2.memberClass();

        Person.Address obj3 = new Person.Address(); // static class
        obj3.staticClass();

        // Can't perform upcasting
        // Person obj4;
        // obj4 = obj1.new Employee();
        // obj4 = new Person.Address();

    }
}
