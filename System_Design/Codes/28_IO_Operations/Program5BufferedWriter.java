import java.io.*;

/* 
 * Buffered Writer is faster than the File Writer.
 * But for buffered writer to work we need file writer.
 * Buffered Writer add some efficient functionalities to the file writer.
 */

public class Program5BufferedWriter {
    public static void main(String[] args) {
        System.out.println("\n***************************************\n");

        File file1 = new File("../static/28_IO_Operations_Program5/file1.txt");

        try {
            FileWriter file1Writer = new FileWriter(file1); // You can pass true as arguments for append mode.
            BufferedWriter file1BufferedWriter = new BufferedWriter(file1Writer);
            file1BufferedWriter.write("Java");
            file1BufferedWriter.newLine();
            file1BufferedWriter.write(65);
            file1BufferedWriter.newLine();
            file1BufferedWriter.close(); // need to close the writer else data will not be written. And closing the buffered writer will automatically close the file writer.

            System.out.println("Written data using Buffered Writer.");
        }
        catch (IOException e) {
            System.out.println(e);
        }

        System.out.println("\n***************************************\n");
    }
}
