class Student {
    private int age;
    private String name;

    public Student(int age, String name) {
        System.out.println("Calling Parameterized Constructor...");
        this.age = age;
        this.name = name;
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

public class Program1Constructor {
    public static void main(String[] args) {
        Student obj1 = new Student(20, "John");
        // Student obj2 = new Student();
        /* 
        * We can't call this, as after encountering the paramerized 
        * constructor java don't include its default constructor which is
        * non - parameterized and without body.
        */
    }
}
