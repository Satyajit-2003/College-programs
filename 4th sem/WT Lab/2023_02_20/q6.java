import java.util.Scanner;

public class q6 {
    public static void main(String[] args){
    Scanner sc = new Scanner(System.in);
        class Employee{
            private int id;
            private String company_name;
            private int salary;

            Employee(int id, String company_name, int salary){
                this.id = id;
                this.company_name = company_name;
                this.salary = salary;
            }

            class Programmer{
                void get_Emp_details(){
                    System.out.print("Employee ID: ");
                    id = sc.nextInt();
                    System.out.print("Employee Company Name: " );
                    company_name= sc.nextLine();
                    company_name= sc.nextLine();
                    System.out.print("Employee Salary: ");
                    salary = sc.nextInt();
                }

                void display_Emp_details(){
                    System.out.println("Employee ID: " + id);
                    System.out.println("Employee Company Name: " + company_name);
                    System.out.println("Employee Salary: " + salary);
                }
            }
        }

        Employee e1 = new Employee(1, "ABC", 10000);
        Employee.Programmer p1 = e1.new Programmer();
        p1.get_Emp_details();
        p1.display_Emp_details();
        sc.close();
    }
}
