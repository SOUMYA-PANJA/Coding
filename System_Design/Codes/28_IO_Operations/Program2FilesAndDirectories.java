import java.io.*;

public class Program2FilesAndDirectories {
    public static void main(String[] args) {
        System.out.println("\n**********************************\n");
        
        File dir1 = new File("../static/28_IO_Operations_Program2/Dir1");

        System.out.println("Before creating dir1....");
        System.out.println("Is dir1 directory? " + dir1.isDirectory());
        
        dir1.mkdir();
        
        System.out.println("\nAfter creating dir1....");
        System.out.println("Is dir1 directory? " + dir1.isDirectory());
        
        File file1 = new File(dir1, "file1.txt");
        
        System.out.println("\nBefore creating file1....");
        System.out.println("Is file1 file? " + file1.isFile());
        
        try {
            file1.createNewFile();
        } 
        catch (IOException e) {
            System.out.println(e);
        }
        
        System.out.println("\nAfter creating file1....");
        System.out.println("Is file1 file? " + file1.isFile());

        file1.delete();
        dir1.delete();
        
        System.out.println("\n**********************************\n");
        
        System.out.println("\n**********************************\n");

        File dir2 = new File("../static/28_IO_Operations_Program2/Dir2");

        System.out.println("As the file/directory is already present therefore need not to create it...");
        System.out.println("Is dir2 directory? " + dir2.isDirectory());


        System.out.println("\nList of all the files in dir2...");
        String files[] = dir2.list();
        int countFilesInDir2 = 0;

        System.out.print("[");
        for (String str : files) {
            countFilesInDir2++;
            System.out.print(str + ", ");
        }
        System.out.println("\b\b]");

        System.out.println("Number of files in dir2: " + countFilesInDir2);

        System.out.println("\n**********************************\n");
    }
}
