// Class having atleast one abstract member must be declared abstract.
// If all the members in a class are abstract then the class achieved full abstraction
// There can't abstract variable and constructor(it have first line as super(), which have a body.).
// We can create references of abstract class, so that is can provide upcasting and dynamic polymorphism.. But we can instantiate an abstract class.
abstract class Plane{
    abstract public void fly();
    abstract public void takeOff();
    public void landing(){
        System.out.println("Plane is landing.");
    }
}

class AeroPlane extends Plane{
    public void fly() {
        System.out.println("Aeroplane is flying at medium height.");
    }
    public void takeOff() {
        System.out.println("Aeroplane is taking off.");
    }
    
}

class CargoPlane extends Plane{
    public void fly() {
        System.out.println("Cargoplane is flying at larger height");
    }
    public void takeOff() {
        System.out.println("Cargoplane is taking offf.");
    }
    
}

class AirPort{
    public void polyMorphism(Plane ref){
        // ref is a reference of abstract class
        ref.fly();
        ref.takeOff();
        ref.landing();
        System.out.println("-------------------------------------");
    }
}

public class Program1AbstractKeyword {
    public static void main(String[] args) {
        AirPort obj = new AirPort();
        obj.polyMorphism(new AeroPlane());
        obj.polyMorphism(new CargoPlane());
    }
}
