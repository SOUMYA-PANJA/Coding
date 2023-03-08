import java.util.Scanner;

/* 
*   
*   * * * * * * * * * * *
*   * *     *   *     * *
*   *   * *       * *   *
*   *   * *       * *   *
*   * *     *   *     * *
*   *         *         *
*   * *     *   *     * *
*   *   * *       * *   *
*   *   * *       * *   *
*   * *     *   *     * *
*   * * * * * * * * * * *
*   
 */

public class Program8PrintBoxWithDiagonalLines {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a number: ");
        int n = sc.nextInt();
        for (int i = 0; i < n; i++){
            for (int j = 0; j < n; j++) {
                if(i == j || (i + j) == n - 1 || (i + j) == n / 2 || (i - j) == n / 2
                || (j - i) == n / 2 || (i + j) == n - 1 + n / 2 || i == 0 || j == 0 || i == n - 1
                || j == n - 1){ // For Odd
                // if(i == j || (i + j) == n - 1 || (i + j) == n / 2 - 1 || (i - j) == n / 2
                // || (j - i) == n / 2 || (i + j) == n - 1 + n / 2 || i == 0 || j == 0 || i == n - 1
                // || j == n - 1){ // For Even
                    System.out.print("* ");
                }
                else{
                    System.out.print("  ");
                }
            }
            System.out.println();
        }
    }
}
