/*Define an interface with three methods – earnings(), deductions() and bonus() and
define a Java class, “Manager” which uses this interface without implementing bonus()
method. Also define another Java class ,”Substaff” which extends from, “Manager”
class and implements bonus() method. Write the complete program to find out
earnings, deduction and bonus of a substaff with basic salary amount entered by the
user as per the following guidelines –
earnings basic + DA (80% of basic) + HRA (15% of basic)
deduction PF 12% of basic
bonus 50% of basic */

import java.util.Scanner;

interface salary{
    double earnings();
    double deductions();
    double bonus();
}

abstract class Manager implements salary{
    double basic;
    public double earnings(){
        return basic + (0.8*basic) + (0.15*basic);
    }
    public double deductions(){
        return 0.12*basic;
    }
}

class Substaff extends Manager{
    public Substaff(double basic){
        this.basic = basic;
    }
    public double bonus(){
        return 0.5*basic;
    }
}

public class q1 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter basic salary: ");
        double basic = sc.nextDouble();
        Substaff s = new Substaff(basic);
        System.out.println("Earnings: " + s.earnings());
        System.out.println("Deductions: " + s.deductions());
        System.out.println("Bonus: " + s.bonus());
        sc.close();
    }
}



