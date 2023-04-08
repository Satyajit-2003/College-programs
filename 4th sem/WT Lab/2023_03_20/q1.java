class account{
    int acc_no;
    String name;
    int balance;
    static int count = 0;

    account(String name){
        this.name = name;
        this.acc_no = ++count;
        this.balance = 0;
    }

    int showbalance(){
        return this.balance;
    }

    void deposit(int amount){
        this.balance += amount;
        System.out.println("Deposited " + amount + " in account " + this.acc_no);
    }

    void withdraw(int amount){
     //TO be overriden
    }

}

class standard extends account{
    standard(String name){
        super(name);
    }

    void withdraw(int amount){
        if(amount <= 100000){
            this.balance -= amount;
            System.out.println("Withdrawn " + amount + " from account " + this.acc_no);
        }
        else if (amount <= 500000){
            this.balance -= (amount + (0.0005*amount));
            System.out.println("Withdrawn " + amount + " from account " + this.acc_no + " with 0.05% penalty");
        }
        else{
            System.out.println("Cannot withdraw more than 500000 from account " + this.acc_no);
        }
    }
}

class premium extends account{
    premium(String name){
        super(name);
    }

    void withdraw(int amount){
        if(amount <= 1000000){
            this.balance -= amount;
            System.out.println("Withdrawn " + amount + " from account " + this.acc_no);
        }
        else{
            System.out.println("Cannot withdraw more than 1000000 from account " + this.acc_no);
        }
    }
}

public class q1 {
    public static void main(String[] args){
        standard a1 = new standard("ABC");
        premium a2 = new premium("DEF");
        a1.deposit(2000000);
        a1.withdraw(250000);
        System.out.println("Balance of a1: "+a1.showbalance());
        a2.deposit(1000000);
        a2.withdraw(250000);
        System.out.println("Balance of a2: "+a2.showbalance());

    }


}
