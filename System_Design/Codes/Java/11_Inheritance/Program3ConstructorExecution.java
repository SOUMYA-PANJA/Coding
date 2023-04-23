class Animal{
    int noOfLegs;

    Animal(){
        System.out.println("Zero parameterized parent constructor.");
    }
    Animal(int noOfLegs){
        System.out.println("Parameterized parent constructor.");
        this.noOfLegs = noOfLegs;
    }
}

class Dog extends Animal{
    boolean bark;

    Dog(){
        this(false);
        System.out.println("Zero parameterized child constructor.");
    }
    Dog(boolean bark){
        System.out.println("Parameterized child constructor.");
        this.bark = bark;
    }
}

public class Program3ConstructorExecution {
    public static void main(String[] args) {
        Dog obj = new Dog();
    }
}
