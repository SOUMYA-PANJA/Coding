interface Car{
    void drive();
}

// class BMW implements Car {
//     public void drive(){
//         System.out.println("Driving...");
//     }
// }

public class Program2AnnonymousClass {
    public static void main(String[] args) {
        // Here it looks like we are instantiating Car interface but internally java creating a new class by using Car interface and drive implementation
        Car obj = new Car(){
            public void drive(){
                System.out.println("Driving...");
            }
        };
        obj.drive();
    }
}
