/* 
 * The classes should be same for serialization and deserialization.
 */

import java.io.Serializable;;
import java.io.FileInputStream;
import java.io.ObjectInputStream;
import java.io.BufferedInputStream;

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

public class Program2Deserialization {
    public static void main(String[] args) {
        System.out.println("\n*******************************************\n");

        CricketPlayer obj1;

        System.out.println("Reading the object using serializable interface...");
        
        try (FileInputStream file1InputStream = new FileInputStream("../static/29_Serialization_And_Deserialization_Program2/file1.txt")) {
            ObjectInputStream objectInputStream = new ObjectInputStream(file1InputStream);
            
            obj1 = (CricketPlayer)objectInputStream.readObject();
            obj1.display();
            
            objectInputStream.close();
        }
        catch (Exception e) {
            System.out.println(e);
        }

        System.out.println("\n*******************************************\n");

        System.out.println("\n*******************************************\n");

        CricketPlayer obj2;

        System.out.println("Reading the object using serializable interface and Buffere input stream...");
        
        try (FileInputStream file2InputStream = new FileInputStream("../static/29_Serialization_And_Deserialization_Program2/file2.txt")) {
            BufferedInputStream file2BufferedInputStream = new BufferedInputStream(file2InputStream);
            ObjectInputStream objectInputStream = new ObjectInputStream(file2BufferedInputStream);
            
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
