import java.util.Scanner;
public class q02 {
    int roll;
    String name;
    int marks;
    Scanner sc = new Scanner(System.in);
    void get_data(){
        System.out.print("Enter Roll no: ");
        roll = sc.nextInt();
        sc.nextLine();
        System.out.print("Enter Name: ");
        name = sc.nextLine();
        System.out.print("Enter Marks: ");
        marks = sc.nextInt();
    }
    void put_data(){
        System.out.println("Roll no: "+roll);
        System.out.println("Name: "+name);
        System.out.println("Marks: "+marks);
    }

    public static void main(String[] args){
        q01 std1 = new q01();
        std1.get_data();
        std1.put_data();
    }
}
