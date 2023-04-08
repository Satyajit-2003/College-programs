import java.util.Scanner;

public class q2 {
    int cus_id;
    String cus_name;
    String branch;
    int balance;
    Scanner sc = new Scanner(System.in);

    void get(){
        System.out.print("Enter customer id: ");
        cus_id = sc.nextInt();
        System.out.print("Enet name: ");
        sc.nextLine();
        cus_name = sc.nextLine();
        System.out.print("Enter Branch: ");
        branch = sc.nextLine();
        System.out.print("Enter balance: ");
        balance = sc.nextInt();
    }

    void display(){
        System.out.println("Customer id: "+cus_id);
        System.out.println("Customer name: "+cus_name);
        System.out.println("Branch: "+branch);
        System.out.println("Balance: "+balance);
    }

    void deposit(){
        System.out.print("Enter amount to deposit: ");
        int amount = sc.nextInt();
        balance += amount;
        System.out.println("New balance: "+balance);
    }

    void withdraw(){
        System.out.print("Enter amount to withdraw: ");
        int amount = sc.nextInt();
        if(amount > balance){
            System.out.println("Insufficient balance");
        }
        else{
            balance -= amount;
            System.out.println("New balance: "+balance);
        }
    }

    public static void main(String[] args){
        q2 obj = new q2();
        obj.get();
        obj.display();
        obj.deposit();
        obj.withdraw();
    }
}
