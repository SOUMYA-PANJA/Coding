import java.util.Scanner;

public class Question8 {
    public static void main(String[] args) 
    {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter string: ");
        String str = sc.nextLine().toUpperCase().replace(" ", "");
        char ch[] = str.toCharArray();
        int arr[] = new int[26];
        for(int i = 0; i < ch.length; i++)
        {
            arr[ch[i] - 65]++;
        }
        int max = 0;
        for(int i = 1; i < arr.length; i++)
        {
            if(arr[i] > arr[max])
            {
                max = i;
            }
        }
        System.out.println("Maximum Occuring Character: " + (char)(max + 65));
    }
}

