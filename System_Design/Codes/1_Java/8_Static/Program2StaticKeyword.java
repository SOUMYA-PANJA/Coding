class Demo{
    static int a = 10;
    static int b = 20;

    int m = 30;
    int n = 40;

    static{
        a = 100;
        b = 200;
        System.out.println("Static block.");
    }

    {
        m = 300;
        n = 400;
        System.out.println("Non - static block.");
    }

    static void display1(){
        System.out.println("Static method.");
        System.out.println("We can call only static members.");
        System.out.println("Static members: ");
        System.out.println("a: " + a);
        System.out.println("b: " + b);
    }
    
    void display2(){
        System.out.println("Non - static method.");
        System.out.println("We can call both static and non - static members.");
        System.out.println("Static members: ");
        System.out.println("a: " + a);
        System.out.println("b: " + b);
        System.out.println("non - static members: ");
        System.out.println("m: " + m);
        System.out.println("n: " + m);
        
    }
}

public class Program2StaticKeyword {
    public static void main(String[] args) {
        System.out.println("In main method.");
        System.out.println();

        Demo.display1();
        System.out.println();

        System.out.println("Creating new object of Demo class.");
        Demo obj = new Demo();
        System.out.println();

        obj.display1();
        System.out.println();

        obj.display2();
    }
}
