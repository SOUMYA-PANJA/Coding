import java.io.*;

/* 
 * Same as Buffered Writer to File Writer.
 * The Buffere Reader is faster than File Reader.
 * And we have reading whole line and file function.
 * It is always recommended that the resources should be closed even if it is a reader or writer.
 */

public class Program6BufferedReader {
    public static void main(String[] args) {
        System.out.println("\n******************************\n");

        File file1 = new File("../static/28_IO_Operations_Program6/file1.txt");

        try (FileReader file1FileReader = new FileReader(file1)) {
            BufferedReader file1BufferedReader = new BufferedReader(file1FileReader);

            String data = file1BufferedReader.readLine();

            System.out.println("Reading a line from the file: " + data);
        }
        catch (IOException e) {
            System.out.println(e);
        }

        try (FileReader file1FileReader = new FileReader(file1)) {
            BufferedReader file1BufferedReader = new BufferedReader(file1FileReader);

            System.out.println("\nReading the whole file...\n");

            String data = file1BufferedReader.readLine();
            while (data != null) {
                System.out.println(data);
                data = file1BufferedReader.readLine();
            }
        }
        catch (IOException e) {
            System.out.println(e);
        }

        System.out.println("\n******************************\n");
    }
}
