import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;

public class Program5CheckedUnchecked{
    public static void main(String[] args) {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        try {
            // Checked Exception. Caught at compile time
            String str = br.readLine();
            System.out.println(str);
        } catch (IOException e) {
            // TODO Auto-generated catch block
            e.printStackTrace();
        }

        //Unchecked Exception. Caught at runtime
        // All runtime exception classes are unchecked exception
        int result = 7/0;
    }
}