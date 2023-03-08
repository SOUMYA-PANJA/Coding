import java.util.Scanner;

public class Question6 {
    public static void main(String[] args) 
    {
        Scanner sc = new Scanner(System.in);
        boolean flag = false;
        System.out.print("Enter string: ");
        String str = sc.nextLine().toUpperCase().replace(" ", "");
        char ch[] = str.toCharArray();

        int arr[] = new int[26];

        for(int i = 0; i < ch.length; i++)
        {
            arr[ch[i] - 65]++;
        }
        for(int i = 0; i < arr.length; i++)
        {
            if(arr[i] == 0)
            {
                System.out.println("Its not pangram");
                flag = true;
                break;
            }
        }
        
        if(flag == false)
        {
            System.out.println("Its pangram");
        }
        
        
    
    }
    
}

