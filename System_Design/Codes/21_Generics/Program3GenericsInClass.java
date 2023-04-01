class St<T>{
    T obj;

    public St(T obj) {
        this.obj = obj;
    }

    public T getObj() {
        return obj;
    }

    public void display(){
        System.out.println("Type of obj is " + obj.getClass().getName());
    }
}

public class Program3GenericsInClass {
    public static void main(String[] args) {
        St<Integer> s1 = new St(10);
        St<String> s2 = new St("Hello");
        St<Float> s3 = new St(10.28);

        System.out.println("\n*******************************\n");
        
        s1.display();
        System.out.println(s1.getObj());

        System.out.println("\n*******************************\n");
        
        System.out.println("\n*******************************\n");
        
        s2.display();
        System.out.println(s2.getObj());
        
        System.out.println("\n*******************************\n");
        
        System.out.println("\n*******************************\n");

        s3.display();
        System.out.println(s3.getObj());

        System.out.println("\n*******************************\n");
    }
}
