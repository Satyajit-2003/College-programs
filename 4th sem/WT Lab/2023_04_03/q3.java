/*4.Write a program in java to handle exception along with finally block with three
different conditions like finally block will be handled if exceptions occurs or don’t
occur. */

import java.util.Scanner;

public class q3
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a number: ");
        int a = sc.nextInt();
        sc.close();
        try
        {
            if(a < 0)
                throw new Exception("Negative number");
            else
                System.out.println("Positive number");
        }
        catch(Exception e)
        {
            System.out.println(e);
        }
        finally
        {
            System.out.println("Finally block");
        }
    }
}