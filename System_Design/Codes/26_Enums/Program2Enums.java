/* 
 * Number of constants that are declared inside the enum, that number of times the constructor of the enum will be called.
 */

enum Result{
    // public static final Result PASS = new Result();
    // Behind the scenes this type of calls are made for each constant.
    PASS, FAIL, NR;

    int marks;

    Result(){
        System.out.println("Constructor is called...");
    }

    public int getMarks() {
        return marks;
    }

    public void setMarks(int marks) {
        this.marks = marks;
    }

}

public class Program2Enums {
    public static void main(String[] args) {
        System.out.println("\n****************************************\n");

        Result.PASS.setMarks(50);
        Result.FAIL.setMarks(30);

        int res1 = Result.PASS.getMarks();
        int res2 = Result.FAIL.getMarks();

        System.out.println("res1: " + res1);
        System.out.println("res2: " + res2);
        System.out.println("NR: " + Result.NR.getMarks()); // By default the will be default values of the data type.
        
        System.out.println("\n****************************************\n");
    }
}
