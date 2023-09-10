import java.util.Comparator;
import java.util.ArrayList;
import java.util.Collections;

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

class CompareRoll implements Comparator<Student>{

    @Override
    public int compare(Student o1, Student o2) {
        return o1.getRoll() - o2.getRoll();
    }

}

class CompareMarks implements Comparator<Student>{

    @Override
    public int compare(Student o1, Student o2) {
        return o1.getMarks() - o2.getMarks();
    }

}

public class Program1Comparator {
    public static void main(String[] args) {
        System.out.println("\n*******************************************\n");
        
        ArrayList<Integer> al1 = new ArrayList<Integer>();
        
        al1.add(10);
        al1.add(9);
        al1.add(6);
        al1.add(7);
        
        System.out.println("Before sorting....");
        System.out.println("al1:" + al1);
        
        Collections.sort(al1);

        System.out.println("After sorting....");
        System.out.println("al1:" + al1);
        
        System.out.println("\n*******************************************\n");

        System.out.println("\n*******************************************\n");
        
        ArrayList<Student> al2 = new ArrayList<Student>();
        
        al2.add(new Student("Jack", 2, 74));
        al2.add(new Student("Zig", 1, 84));
        al2.add(new Student("Moly", 3, 77));
        al2.add(new Student("Neha", 4, 66));
        
        System.out.println("Before sorting....");
        System.out.println("al2:" + al2);

        Collections.sort(al2, new CompareMarks());
        
        System.out.println("After sorting according to marks....");
        System.out.println("al2:\n" + al2);
        
        Collections.sort(al2, new CompareRoll());

        System.out.println("After sorting according to roll....");
        System.out.println("al2:" + al2);

        System.out.println("\n*******************************************\n");
    }
}
