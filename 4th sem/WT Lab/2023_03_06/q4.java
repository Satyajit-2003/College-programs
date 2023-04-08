class Saving_acc{
    static double annual_intrest_rate;
    double savings;
    Saving_acc(double savings){
        this.savings = savings;
    }
    void monthly_intrest(){
        double monthly_intrest = (savings*annual_intrest_rate)/12;
        savings += monthly_intrest;
    }
    void show_balance(){
        System.out.println("Balance: " + savings);
    }

    static void modify_annual_intrest_rate(double new_rate){
        annual_intrest_rate = new_rate;
    }
}

public class q4 {
    public static void main(String[] args){
        Saving_acc us1 = new Saving_acc(2000.00);
        Saving_acc us2 = new Saving_acc(3000.00);
        Saving_acc.modify_annual_intrest_rate(0.04);
        us1.monthly_intrest();
        us2.monthly_intrest();
        us1.show_balance();
        us2.show_balance();
        Saving_acc.modify_annual_intrest_rate(0.05);
        us1.monthly_intrest();
        us2.monthly_intrest();
        us1.show_balance();
    }

}
