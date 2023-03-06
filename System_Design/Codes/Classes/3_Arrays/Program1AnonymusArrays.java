public class Program1AnonymusArrays {
    static int sum(int arr[]){
        int result = 0;
        for (int i : arr) {
            result += i;
        }
        return result;
    }
    public static void main(String[] args) {
        System.out.println(sum(new int[]{1, 2, 3, 4}));
    }
}
