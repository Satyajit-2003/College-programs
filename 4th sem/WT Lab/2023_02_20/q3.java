import java.util.Scanner;

public class q3 {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        class Employee{
            int empId;
            String empName;
            int empSalary;

            Employee(){
                System.out.print("Enter Employee ID: ");
                empId = sc.nextInt();
                System.out.print("Enter Employee Name: ");
                empName = sc.nextLine();
                empName = sc.nextLine();
                System.out.print("Enter Employee Salary: ");
                empSalary = sc.nextInt();
            }

            Employee(int id, String name, int salary){
                empId = id;
                empName = name;
                empSalary = salary;
            }

            Employee(Employee e){
                empId = e.empId;
                empName = e.empName;
                empSalary = e.empSalary;
            }

            void show(){
                System.out.println("Employee ID: " + empId);
                System.out.println("Employee Name: " + empName);
                System.out.println("Employee Salary: " + empSalary);
            }
        }
        Employee e1 = new Employee();
        Employee e2 = new Employee(1, "John", 10000);
        Employee e3 = new Employee(e2);
        e1.show();
        e2.show();
        e3.show();
        sc.close();
    }
}
