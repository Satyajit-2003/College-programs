/*Write a program in java to illustrate in what situations will compile time error will
occur in Method Overriding. */

class A
{
    public void display()
    {
        System.out.println("A");
    }
}

class B extends A
{
    protected void display(){}
}

public class q4
{
    public static void main(String[] args)
    {
        B b = new B();
        b.display();
    }
}