/*Create an interface currency that contains two methods moneyconversion()(rupees to dollar or
vice versa) and countrycurrency() methods. Create a class currencyconversion to implement the
currency interface and its methods. In the main method class create an object for the class to invoke
the methods of the interface and test it? */

import java.util.Scanner;
interface currency
{
    void moneyconversion();
    void countrycurrency();
}

class currencyconversion implements currency
{
    public void moneyconversion()
    {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the amount in rupees");
        int rupees = sc.nextInt();
        System.out.println("The amount in dollars is "+(rupees*70.00));
        sc.close();
    }
    public void countrycurrency()
    {
        System.out.println("The country currency is Indian Rupees");
    }
}

public class q1
{
    public static void main(String[] args)
    {
        currencyconversion cc = new currencyconversion();
        cc.moneyconversion();
        cc.countrycurrency();
    }
}