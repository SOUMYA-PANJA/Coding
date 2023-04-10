enum Result{
    PASS, FAIL, NR;
}

public class Program3SwitchCaseAndEnums {
    public static void main(String[] args) {
        System.out.println("\n******************************************\n");

        Result res = Result.PASS;
        
        switch (res) {
            case PASS:
                System.out.println("Passed...");
                break;
            case FAIL:
                System.out.println("Failed...");
                break;
            case NR:
                System.out.println("Result not declared yet...");
                break;
        
            default:
                System.out.println("No matching...");
                break;
        }
        
        System.out.println("\n******************************************\n");
    }
}
