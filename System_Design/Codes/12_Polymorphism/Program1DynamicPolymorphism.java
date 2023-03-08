class Plane{
    public void fly(){
        System.out.println("Plane is flying in the sky.");
    }
    public void takeOff(){
        System.out.println("Plane is taking off.");
    }
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
    public void alert(){
        System.out.println("Everyone please alert.");
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
        // Calling overriden methods
        ref.fly();
        ref.takeOff();

        // Calling inherited methods.
        ref.landing();
        System.out.println("-------------------------------------");
    }
}

// Using parent class reference we can call inheritated and overriden methods but we can't call specialized methods.
// In the case of specialized methods we can use casting.

public class Program1DynamicPolymorphism {
    public static void main(String[] args) {
        AirPort obj1 = new AirPort();
        obj1.polyMorphism(new AeroPlane());
        obj1.polyMorphism(new CargoPlane());
        System.out.println("\n\n");

        Plane obj2;
        obj2 = new AeroPlane();
        obj2.fly();
        obj2.takeOff();
        obj2.landing();
        ((AeroPlane)obj2).alert(); // Type casting to use specialized methods
    }
}
