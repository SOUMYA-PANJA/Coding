import java.io.Serializable;
import java.io.FileOutputStream;
import java.io.ObjectOutputStream;
import java.io.BufferedOutputStream;

class CricketPlayer implements Serializable {
    private String name;
    private int age;
    private int runs;

    public CricketPlayer(String name, int age, int runs) {
        this.name = name;
        this.age = age;
        this.runs = runs;
    }

    public void display(){
        System.out.println("\n-------------------------------------\n");

        System.out.println("Name: " + this.name);
        System.out.println("Age: " + this.age);
        System.out.println("Runs: " + this.runs);

        System.out.println("\n-------------------------------------\n");
    }
}

public class Program1Serialization {
    public static void main(String[] args) {
        System.out.println("\n*******************************************\n");

        CricketPlayer obj1 = new CricketPlayer("Sachin", 44, 1000000);

        obj1.display();

        System.out.println("Writing the object using serializable interface...");
        
        try (FileOutputStream file1OutputStream = new FileOutputStream("../static/29_Serialization_And_Deserialization_Program1/file1.txt")) {
            ObjectOutputStream objectOutputStream = new ObjectOutputStream(file1OutputStream);
            objectOutputStream.writeObject(obj1);
            objectOutputStream.flush();
            objectOutputStream.close();
        }
        catch (Exception e) {
            System.out.println(e);
        }

        System.out.println("\n*******************************************\n");

        System.out.println("\n*******************************************\n");

        CricketPlayer obj2 = new CricketPlayer("Ronit", 60, 5000000);

        obj2.display();
        
        System.out.println("Writing the object using serializable interface and buffered output stream...");
        
        try (FileOutputStream file2OutputStream = new FileOutputStream("../static/29_Serialization_And_Deserialization_Program1/file2.txt")) {
            BufferedOutputStream file2BufferedOutputStream = new BufferedOutputStream(file2OutputStream);
            ObjectOutputStream objectOutputStream = new ObjectOutputStream(file2BufferedOutputStream);
            objectOutputStream.writeObject(obj2);
            objectOutputStream.flush();
            objectOutputStream.close();
        }
        catch (Exception e) {
            System.out.println(e);
        }

        System.out.println("\n*******************************************\n");
    }
}
