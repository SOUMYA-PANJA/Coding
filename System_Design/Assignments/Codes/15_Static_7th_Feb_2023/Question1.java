public class Question1 {
    static void fun1(){
        System.out.println("Static variable.");
    }
    void fun2(){
        System.out.println("Non-static variable.");
    }
    public static void main(String []args){
        Question1 obj = new Question1();
        fun1();
        obj.fun2();
    }
}
