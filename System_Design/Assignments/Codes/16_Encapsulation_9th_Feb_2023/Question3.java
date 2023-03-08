class Test{
    private int value;

    Test(int value){
        this.value = value;
    }

    public int getValue() {
        return value;
    }

    public void setValue(int value) {
        this.value = value;
    }
    
}

public class Question3 {
    public static void main(String[] args) {
        Test obj = new Test(10);

        System.out.println("Initially: " + obj.getValue());
        obj.setValue(100);
        System.out.println("Now: " + obj.getValue());
    }
}
