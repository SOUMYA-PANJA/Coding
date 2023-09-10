import java.io.*;

/* 
 * In Buffered Writer or File Writer you can't add integer, float, boolean, etc values.
 * But in Print Writer you can do so.
 */

public class Program7PrintWriter {
    public static void main(String[] args) {
        System.out.println("\n***************************************\n");

        File file1 = new File("../static/28_IO_Operations_Program7/file1.txt");

        try {
            FileWriter file1Writer = new FileWriter(file1); // You can pass true as arguments for append mode.
            PrintWriter file1PrintWriter = new PrintWriter(file1Writer);

            file1PrintWriter.write(65); // this wiil insert character.
            file1PrintWriter.write('\n');
            file1PrintWriter.write("java");
            file1PrintWriter.write('\n');

            file1PrintWriter.println("Hello");
            file1PrintWriter.println(30);
            file1PrintWriter.println(53.223);
            file1PrintWriter.println(true);
            // file1PrintWriter.println(null); // error
            file1PrintWriter.println('c');

            file1PrintWriter.close();

            System.out.println("Written data in the file using PrintWriter...");
        }
        catch (IOException e) {
            System.out.println(e);
        }

        System.out.println("\n***************************************\n");
    }
}
