import java.util.*;

class Student implements Comparable<Student>{
    private String name;
    private int roll;
    private int marks;
    
    public Student(String name, int roll, int marks) {
        this.name = name;
        this.roll = roll;
        this.marks = marks;
    }

    public String getName() {
        return name;
    }

    public int getRoll() {
        return roll;
    }

    public int getMarks() {
        return marks;
    }

    public void setMarks(int marks) {
        this.marks = marks;
    }

    @Override
    public String toString() {
        return "Student: [name=" + name + ", roll=" + roll + ", marks=" + marks + "]\n";
    }

    @Override
    public int compareTo(Student o) {
        return this.marks - o.marks;
    }
    
    
}

public class Program3Comparable {
    public static void main(String[] args) {
        System.out.println("\n*******************************************\n");
        
        ArrayList<Student> al1 = new ArrayList<Student>();
        
        al1.add(new Student("Jack", 2, 74));
        al1.add(new Student("Zig", 1, 84));
        al1.add(new Student("Moly", 3, 77));
        al1.add(new Student("Neha", 4, 66));

        System.out.println("Before sorting....");
        System.out.println("al1:" + al1);

        Collections.sort(al1);
        
        System.out.println("After sorting according to marks....");
        System.out.println("al1:\n" + al1);

        System.out.println("\n*******************************************\n");
    }
}
