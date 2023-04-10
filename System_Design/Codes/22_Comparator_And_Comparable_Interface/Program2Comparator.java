import java.util.*;

class Student{
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
    
}

public class Program2Comparator {
    public static void main(String[] args) {
        System.out.println("\n*******************************************\n");
        
        ArrayList<Student> al2 = new ArrayList<Student>();
        
        al2.add(new Student("Jack", 2, 74));
        al2.add(new Student("Zig", 1, 84));
        al2.add(new Student("Moly", 3, 77));
        al2.add(new Student("Neha", 4, 66));
        
        Comparator<Student> cm = (o1, o2) -> o1.getMarks() - o2.getMarks();
        Comparator<Student> cr = (o1, o2) -> o1.getRoll() - o2.getRoll();

        System.out.println("Before sorting....");
        System.out.println("al2:" + al2);

        Collections.sort(al2, cm);
        
        System.out.println("After sorting according to marks....");
        System.out.println("al2:\n" + al2);
        
        Collections.sort(al2, cr);

        System.out.println("After sorting according to roll....");
        System.out.println("al2:" + al2);

        System.out.println("\n*******************************************\n");
    }
}
