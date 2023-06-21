/*Write a program to handle IOException with throws and throw concept.*/

import java.io.IOException;
import java.util.Scanner;

public class q2
{
    public static void main(String[] args) throws IOException
    {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a number: ");
        int a = sc.nextInt();
        sc.close();
        if(a < 0)
            throw new IOException("Negative number");
        else
            System.out.println("Positive number");
    }
}