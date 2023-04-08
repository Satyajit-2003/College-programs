class Employee{
    String name;
    int id;
    int salary;

    void calcSal(){}
    void show_sal(){
        System.out.println("Salary is:"+salary);
    }
}

class regular extends Employee{
    int da, hra, basic;
    regular(int da,int hra,int basic){
        this.da = da;
        this.hra = hra;
        this.basic = basic;
        calcSal();
    }
    void calcSal(){
        super.salary = da+hra+basic;
    }
}

class part_time extends Employee{
    int hour, pay;
    part_time(int hour, int pay){
        this.hour = hour;
        this.pay = pay;
        calcSal();
    }
    void calcSal(){
        super.salary = hour * pay;
    }
}

public class q4 {
    public static void main(String[] args){
        regular r1 = new regular(50, 60, 6000);
        part_time p1 = new part_time(10, 80);

        r1.show_sal();
        p1.show_sal();
    }
}
