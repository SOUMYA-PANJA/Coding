import java.util.HashMap;

class Student{
    private String name;
    private int age;
    private String city;

    Student(String name, int age, String city){
        this.name = name;
        this.age = age;
        this.city = city;
    }

    public String getName() {
        return name;
    }

    public int getAge() {
        return age;
    }

    public String getCity() {
        return city;
    }

    public String toString(){
        return "<-- Name: " + this.name + " -- Age: " + this.age + " -- City: " + this.city + " -->";
    }
}

public class Program5HashMapFunctions {
    public static void main(String[] args) {
        System.out.println("\n************************************************\n");
        
        Student st1 = new Student("Soumya", 22, "Chandrakona Road");
        Student st2 = new Student("Rohit", 21, "Salboni");
        Student st3 = new Student("Ayush", 22, "Kiaboni");
        
        HashMap hm1 = new HashMap();
        
        hm1.put(1, st1);
        hm1.put(2, st2);
        hm1.put(3, st3);

        System.out.println("hm1: " + hm1);

        System.out.println("\n************************************************\n");
    }
}
