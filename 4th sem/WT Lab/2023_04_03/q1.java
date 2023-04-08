/*WAP in java to create a user defined Exception called NegativeNumberException
with a message given number is less than zero. Now handle the exception when user
enters a negative number from the keyboard otherwise display the given positive
number. */

class negative_error extends Exception
{
    public negative_error(String s)
    {
        super(s);
    }
}

public class q1
{
    public static void main(String[] args)
    {
        int a = -6;
        try
        {
            if(a < 0)
                throw new negative_error("Negative number");
        }
        catch(negative_error e)
        {
            System.out.println(e);
        }
    }
}