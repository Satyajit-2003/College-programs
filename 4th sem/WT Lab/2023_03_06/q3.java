import java.util.Scanner;

class Date{
    int date;
    int month;
    int year;

    Date(int date, int month, int year){
        this.date = date;
        this.month = month;
        this.year = year;
    }

    int is_Leap(){
        if (year%4 == 0 &&(year%100 != 0 || year%400 == 0)){
            return 1;
        }
        else{
            return 0;
        }
    }

    void DaySinceJan1(){
        int days = 0;
        for(int i=1; i<month; i++){
            if(i==1 || i==3 || i==5 || i==7 || i==8 || i==10 || i==12){
                days += 31;
            }
            else if(i==4 || i==6 || i==9 || i==11){
                days += 30;
            }
            else{
                if (is_Leap() == 1){
                    days += 29;
                }
                else{
                    days += 28;
                }
            }
        }
        days += date;
        System.out.println("Days since Jan 1: " + days);
    }
}

public class q3 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.println("Enter Date: ");
        int date = scanner.nextInt();
        System.out.println("Enter Month: ");
        int month = scanner.nextInt();
        System.out.println("Enter Year: ");
        int year = scanner.nextInt();
        Date d = new Date(date, month, year);
        d.DaySinceJan1();
        scanner.close();
    }
}
