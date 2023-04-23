class Student{
    private int age;
    private String name;

    public Student() {
        System.out.println("Zero Parameterized Constructor Called.");
    }
    public Student(int age) {
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
public class Program2ConstructorOverloading {
    public static void main(String[] args) {
        Student obj1 = new Student();
        Student obj2 = new Student(18);
        Student obj3 = new Student("James");
        Student obj4 = new Student(18, "James");
    }
}
