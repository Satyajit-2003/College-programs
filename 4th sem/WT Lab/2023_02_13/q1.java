import java.util.Scanner;

public class q1 {
    int real, imaginary;
    Scanner sc = new Scanner(System.in);

    void get(){
        System.out.print("Enter Real: ");
        real = sc.nextInt();
        System.out.print("Enter Imaginary: ");
        imaginary = sc.nextInt();
    }

    void display(){
        System.out.println(real+" + "+"i"+imaginary);
    }

    void add(q1 c1, q1 c2){
        q1 sum = new q1();
        sum.real = c1.real + c2.real;
        sum.imaginary = c1.imaginary + c2.imaginary;
        System.out.print("Sum is: ");
        sum.display();
    }
    
    void subtract(q1 c1, q1 c2){
        q1 sum = new q1();
        sum.real = c1.real - c2.real;
        sum.imaginary = c1.imaginary - c2.imaginary;
        System.out.print("Difference is: ");
        sum.display();
    }


    public static void main(String[] args){
        q1 obj1 = new q1();
        q1 obj2 = new q1();

        obj1.get();
        obj2.get();

        obj1.display();
        obj2.display();

        obj1.add(obj1, obj2);
        obj1.subtract(obj1, obj2);
    }

}
