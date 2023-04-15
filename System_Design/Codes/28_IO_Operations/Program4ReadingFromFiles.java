import java.io.*;

public class Program4ReadingFromFiles {
    public static void main(String[] args) {
        System.out.println("\n******************************************\n");

        try (FileReader file1Reader = new FileReader("../static/28_IO_Operations_Program4/file1.txt")) {
            System.out.println("Reading 100 characters...");
            for (int i = 0; i < 100; i++) {
                char data = (char)file1Reader.read(); // Returns the corresponding decimal value
                System.out.print(data);
            }
            System.out.println();
        } 
        catch (IOException e) {
            System.out.println(e);
        }

        try (FileReader file1Reader = new FileReader("../static/28_IO_Operations_Program4/file1.txt")) {
            System.out.println("\nReading the whole file...");
            
            int data = file1Reader.read();
            while (data > -1) {
                System.out.print((char)data);
                data = file1Reader.read();
            }
            System.out.println();
        } 
        catch (IOException e) {
            System.out.println(e);
        }
        
        System.out.println("\n******************************************\n");
        
        System.out.println("\n******************************************\n");

        File file1 = new File("../static/28_IO_Operations_Program4/file1.txt");

        char file1CharArray[] = new char[(int)file1.length()];

        try (FileReader file1Reader = new FileReader(file1)) {
            int lengthOfData = file1Reader.read(file1CharArray);

            System.out.println("Length of data read from file1: " + lengthOfData);

            System.out.println("\nData read using character array...");
            System.out.println(file1CharArray);
        } 
        catch (IOException e) {
            System.out.println(e);
        }
        
        System.out.println("\n******************************************\n");
    }
}
