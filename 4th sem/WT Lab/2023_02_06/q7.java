import java.util.Scanner;

public class q7 {
    public static void main(String[] args){
        System.out.print("Enter the number: ");
        Scanner sc = new Scanner(System.in);
        int sum = 0, prod = 1, num, rem;
        num = sc.nextInt();
        while (num != 0){
            rem = num % 10;
            sum += rem;
            prod *= rem;
            num /= 10;
        }
        if ( sum  == prod){
            System.out.println("The number is spy");
        }else{
            System.out.println("The number is not a spy");
        }
        sc.close();
    }
}
