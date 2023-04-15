/* 
 * Here age variable will not be written in serialization.
 */

import java.io.Serializable;
import java.io.FileOutputStream;
import java.io.ObjectOutputStream;
import java.io.BufferedOutputStream;
import java.io.FileInputStream;
import java.io.ObjectInputStream;
import java.io.BufferedInputStream;

class CricketPlayer implements Serializable {
    private String name;
    transient private int age;
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

public class Program3SelectiveSerialization {
    public static void main(String[] args) {
        System.out.println("\n*******************************************\n");

        CricketPlayer obj1 = new CricketPlayer("Ronit", 60, 5000000);
        
        System.out.println("Writing the object using serializable interface and buffered output stream...");
        
        obj1.display();
        
        try (FileOutputStream file1OutputStream = new FileOutputStream("../static/29_Serialization_And_Deserialization_Program3/file1.txt")) {
            BufferedOutputStream file1BufferedOutputStream = new BufferedOutputStream(file1OutputStream);
            ObjectOutputStream objectOutputStream = new ObjectOutputStream(file1BufferedOutputStream);
            objectOutputStream.writeObject(obj1);
            objectOutputStream.flush();
            objectOutputStream.close();
        }
        catch (Exception e) {
            System.out.println(e);
        }

        CricketPlayer obj2;

        System.out.println("Reading the object using serializable interface and Buffere input stream...");
        
        try (FileInputStream file1InputStream = new FileInputStream("../static/29_Serialization_And_Deserialization_Program3/file1.txt")) {
            BufferedInputStream file1BufferedInputStream = new BufferedInputStream(file1InputStream);
            ObjectInputStream objectInputStream = new ObjectInputStream(file1BufferedInputStream);
            
            obj2 = (CricketPlayer)objectInputStream.readObject();
            obj2.display();
            
            objectInputStream.close();
        }
        catch (Exception e) {
            System.out.println(e);
        }

        System.out.println("\n*******************************************\n");
    }
}
