import java.io.*;

public class Program3WritingOnTheFile {
    public static void main(String[] args) {
        System.out.println("\n*************************************\n");

        File file1 = new File("../static/28_IO_Operations_Program3/file1.txt");

        System.out.println("Created a file writer object...\n");
        try (FileWriter file1Writer = new FileWriter(file1)) {
            char chArr[] = {'j', 'a', 'v', 'a', '\n'};
            file1Writer.write("Hello\n");
            file1Writer.write(chArr);
            file1Writer.write(65);
            file1Writer.write('\n');
            file1Writer.write(97);
        }
        catch (IOException e) {
            System.out.println(e);
        }

        System.out.println("\nThe file writer is closed as without closing the values aren't be written. We either flush or close the file.");

        System.out.println("\n*************************************\n");

        System.out.println("\n*************************************\n");

        System.out.println("Opened the file in append mode...");
        try {
            FileWriter file2Writer = new FileWriter("../static/28_IO_Operations_Program3/file2.txt", true);

            char chArr[] = {'j', 'a', 'v', 'a', '\n'};

            file2Writer.write("Hello\n");
            file2Writer.write(chArr);
            file2Writer.write(65);
            file2Writer.write('\n');
            file2Writer.write(97);
            file2Writer.write('\n');

            file2Writer.close();
        }
        catch (Exception e) {
            System.out.println(e);
        }

        System.out.println("\n*************************************\n");
    }
}
