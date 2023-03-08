class Student{
    private int age;
    private String name;

    public int getAge() {
        return age;
    }
    public void setAge(int age) {
        this.age = age;
    }
    public String getName() {
        return name;
    }
    public void setName(String name) {
        this.name = name;
    }
    
}

public class Program1Encapsulation {
    public static void main(String[] args) {
        System.out.println("Created two objects...\n");
        Student obj1 = new Student();
        Student obj2 = new Student();

        System.out.println("Getting Ages: ");
        System.out.println(obj1.getAge());
        System.out.println(obj2.getAge());
        System.out.println();

        System.out.println("Getting Names: ");
        System.out.println(obj1.getName());
        System.out.println(obj2.getName());
        System.out.println();
        
        System.out.println("Setting Ages...");
        obj1.setAge(20);
        obj2.setAge(21);
        System.out.println();

        System.out.println("Setting Names...");
        obj1.setName("Jackson");
        obj2.setName("Sam");
        System.out.println();

        System.out.println("Getting Ages: ");
        System.out.println(obj1.getAge());
        System.out.println(obj2.getAge());
        System.out.println();

        System.out.println("Getting Names: ");
        System.out.println(obj1.getName());
        System.out.println(obj2.getName());
        System.out.println();
    }
}
