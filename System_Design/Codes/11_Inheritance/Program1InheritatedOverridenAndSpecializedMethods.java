/* 
 * In class Plane:
 * fly() : is an overriden method.
 * 
 * In classes CargoPlane and PassengerPlane
 * fly() : is an overriding method.
 * carryGoods() and carryPassenger() : are both specialized methods
 */

class Plane{
    void takeOff(){
        System.out.println("Plane taking off...");
    }
    void fly(){
        System.out.println("Plane is flying...");
    }
}

class CargoPlane extends Plane{
    void fly(){
        System.out.println("Cargoplane is flying at high level...");
    }
    void carryGoods(){
        System.out.println("Cargoplane carries goods...");
    }
}

class PassengerPlane extends Plane{
    void fly(){
        System.out.println("Passengerplane is flying at low level...");
    }
    void carryPassengers(){
        System.out.println("Passengerplane carries passengers...");
    }
}

public class Program1InheritatedOverridenAndSpecializedMethods {
    public static void main(String[] args) {
        
    }
}
