import java.util.Scanner;

public class q2 {
    public static void main(String[] args){
        int num;
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the number: ");
        num = sc.nextInt();

        int org = num, digits = 0, pal_check = 0, amg_check = 0, rem;
        while (org != 0){
            rem = org%10;
            org /= 10;
            digits++;
            pal_check = (pal_check * 10)+ rem;
        }
        org = num;
        while (org != 0){
            rem = org%10;
            org  = org/10;
            amg_check += Math.pow((double)rem, (double) digits);
        }
        if (num == pal_check){
            System.out.println("The number is a palindrome.");
        }else{
            System.out.println("The number is not a palindrome.");
        }

        if (amg_check == num){
            System.out.println("The number is an armstrong number.");
        }else{
            System.out.println("The number is not an armstrong number. ");
        }
        sc.close();

}

}
