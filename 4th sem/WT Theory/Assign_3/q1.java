/*. Write a class Temperature that converts temperature between Fahrenheit (F) and Celsius (C). The
formulas for conversion between the to units are:
F= (9.0 x Celsius)/5.0 + 32.0
C=(Fahrenheit-32.0) x 5.0/9.0
The program should throw the exception of type NumberFormatException if the number of degrees is
not a legal floating point number. The program should check the data from the command line and
give suitable feedback. */

class Temperature
{
    double convertToF(double temp){
        return (9.0*temp)/5.0 + 32.0;
    }
    double convertToC(double temp){
        return (temp-32.0)*5.0/9.0;
    }
}

public class q1
{
    public static void main(String[] args)
    {
        try{
            double temp = Double.parseDouble(args[0]);
            Temperature t = new Temperature();
            System.out.println(t.convertToF(temp));
        }
        catch(NumberFormatException e){
            System.out.println("Please enter a valid number");
        }
    }
}