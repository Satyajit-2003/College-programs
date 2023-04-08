import java.util.Scanner;
public class q01 {
    int id;
    String name;
    int salary;
    Scanner sc = new Scanner(System.in);
    void get_data(){
        System.out.print("Enter id: ");
        id = sc.nextInt();
        sc.nextLine();
        System.out.print("Enter Name: ");
        name = sc.nextLine();
        System.out.print("ENter Salary: ");
        salary = sc.nextInt();
    }
    void put_data(){
        System.out.println("ID: "+id);
        System.out.println("Name: "+name);
        System.out.println("Salary: "+salary);
    }

    public static void main(String[] args){
        q01 emp1 = new q01();
        emp1.get_data();
        emp1.put_data();
    }
}
