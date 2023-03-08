/* 
 * private -> default -> protected -> private
 * -----> increasing visibility
 */

class Animal{
    protected void shout(){
        System.out.println("Shout");
    }
}

class Dog extends Animal{
    // Allowed
    // Increasing visibility is allowed
    // public void shout(){
    //     System.out.println("Bark");
    // }

    // Not allowed
    // Decreasing visibility is not allowed
    // private void shout(){
    //     System.out.println("Bark");
    // }

    // Not allowed
    // Can't change the return type
    // protected int shout(){
    //     System.out.println("Bark");
    //     return 0;
    // }

    // If you change the parameters then it becomes a specialized method of this class. And concept of overloading is used not overriding.
    // protected void shout(int x){
    //     System.out.println("Bark");
    // }
}

public class Program2RulesOfOverriding {
    public static void main(String[] args) {
        
    }
}
