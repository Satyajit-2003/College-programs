import java.util.Scanner;
class InvalidDateException extends Exception{
    InvalidDateException(String s){
        super(s);
    }
}

class NumberNameException extends Exception{
    NumberNameException(String s){
        super(s);
    }
}

public class q2{
    public static void main(String[] args) throws InvalidDateException, NumberNameException{
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter date in dd-mm-yyyy format");
        String date = sc.nextLine();
        String[] dateArr = date.split("-");
        
        int d = Integer.parseInt(dateArr[0]);
        int m = Integer.parseInt(dateArr[1]);
        int y = Integer.parseInt(dateArr[2]);
        
        if (d < 0 || d > 31){
            throw new InvalidDateException("Invalid Date");
        }
        
        if (m < 0 || m > 12){
            throw new InvalidDateException("Invalid Month");
        }
        
        if (y < 0 || y > 2022){
            throw new InvalidDateException("Invalid Year");
        }
        System.out.println("Correct Date");
        
        System.out.println("Enter name");
        String name = sc.nextLine();
        
        for (int i = 0; i < name.length(); i++) {
            if (name.charAt(i) >= '0' && name.charAt(i) <= '9'){
                throw new NumberNameException("Name cannot contain numbers");
            }
        }
        System.out.println("Correct Name");     
        sc.close();
    }
}