interface Computer{
    void compileCode();
}

class Desktop implements Computer{
    public void compileCode(){
        System.out.println("Yes I can work on Desktop.");
    }
}

class Laptop implements Computer{
    public void compileCode(){
        System.out.println("Yes I can work on Laptop.");
    }
}

class Developer{
    void buildApp(Computer obj){
        System.out.println("Need a device to work.");
        obj.compileCode();
        System.out.println("----------------------------------------");
    }
}

public class Program2InterfaceExample {
    public static void main(String[] args) {
        Developer dev = new Developer();

        dev.buildApp(new Desktop());
        dev.buildApp(new Laptop());
    }
}
