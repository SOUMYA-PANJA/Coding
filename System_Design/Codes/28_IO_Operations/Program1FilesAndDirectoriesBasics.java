import java.io.*;

public class Program1FilesAndDirectoriesBasics {
    public static void main(String[] args) {
        System.out.println("\n********************************************************\n");

        System.out.println("Files........\n");

        File file1 = new File("../static/28_IO_Operations_Program1/file1.txt"); // If the file or directory is not present then the

        System.out.println("Before creating the file....");
        System.out.println("Does the file exists: " + file1.exists()); // Outputs false
        
        try {
            file1.createNewFile();
        } 
        catch (IOException e) {
            System.out.println(e);
        }
        
        System.out.println("\nAfter creating the file....");
        System.out.println("Does the file exists: " + file1.exists()); // Outputs true
        
        file1.delete();
        System.out.println("\nFile deleted...");
        System.out.println("\nAfter deleting the file....");
        System.out.println("Does the file exists: " + file1.exists()); // Outputs true
        
        System.out.println("\n********************************************************\n");

        System.out.println("\n********************************************************\n");

        System.out.println("Directory........\n");

        File dir1 = new File("../static/28_IO_Operations_Program1/Dir1");

        System.out.println("Before creating the directory....");
        System.out.println("Does the directory exists: " + dir1.exists()); // Outputs false
        
        dir1.mkdir();
        
        System.out.println("\nAfter creating the directory....");
        System.out.println("Does the directory exists: " + dir1.exists()); // Outputs true
        
        dir1.delete();
        System.out.println("\nDirectory deleted...");
        System.out.println("\nAfter deleting the directory....");
        System.out.println("Does the directory exists: " + dir1.exists()); // Outputs true
        
        System.out.println("\n********************************************************\n");
    }
}
