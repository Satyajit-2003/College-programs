/*Write a program to create an Account class containing acc_no, balance as data members and
display() to display account details. Inherit it in Person class with all mentioned data members and
functions. Person class also has name and aadhar_no as extra data members of its own. Override
display() function of person’s class. Test your program with minimum 5 persons details. */

class Account
{
    private int acc_no;
    private double balance;
    Account(int a, double b){
        acc_no = a;
        balance = b;
    }
    void display(){
        System.out.println("Account number is "+acc_no+" and balance is "+balance);
    }
}

class Person extends Account
{
    private String name;
    private int aadhar_no;
    Person(int a, double b, String n, int ad){
        super(a, b);
        name = n;
        aadhar_no = ad;
    }
    void display(){
        super.display();
        System.out.println("Name is "+name+" and aadhar number is "+aadhar_no);
    }
}

public class q5
{
    public static void main(String[] args)
    {
        Person p[] = new Person[5];
        p[0] = new Person(1, 1000.0, "A", 1234);
        p[1] = new Person(2, 2000.0, "B", 2345);
        p[2] = new Person(3, 3000.0, "C", 3456);
        p[3] = new Person(4, 4000.0, "D", 4567);
        p[4] = new Person(5, 5000.0, "E", 5678);
        for(int i=0; i<5; i++){
            p[i].display();
        }
    }
}