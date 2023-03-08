class Student{ // By default all classes inherit object class.
    private int age;
    private String name;

    // By default super() is included in the constructor's first line of the body. 
    // We can't specify this() and super() in middle of the body. It should be peresent in the very first line of the constructor body.
    public Student() {
        super(); // This line is not need to be written. As already included in all the constructors by default.
        System.out.println("Zero Parameterized Constructor Called.");
    }
    public Student(int age) {
        this(); // Need to explicity specified by the programmer unlike super(). Here super() is not included by defalut as this() is included.
        this.age = age;
        System.out.println("Age Parameterized Constructor Called.");
    }
    public Student(String name) {
        this.name = name;
        System.out.println("Name Parameterized Constructor Called.");
    }
    public Student(int age, String name) {
        this.age = age;
        this.name = name;
        System.out.println("Parameterized Constructor Called. Having two parameter.");
    }

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

public class Program3ThisAndSuperMethods {
    public static void main(String[] args) {
        Student obj1 = new Student();
        Student obj2 = new Student(18);
    }
}
