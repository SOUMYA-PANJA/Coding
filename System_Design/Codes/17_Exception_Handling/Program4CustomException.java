class MyException extends Exception{
    MyException(){

    }

    MyException(String msg){
        super(msg);
    }
}

public class Program4CustomException {
    public static void main(String[] args) {
        int age = 0;
        try{
            if(age <= 0){
                throw new MyException("Error");
            }
        }
        catch(Exception e){
            System.out.println(e);
        }
    }
}
