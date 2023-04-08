import java.util.Scanner;

public class q5 {
    public static void main(String[] args){
        class time{
            Scanner sc = new Scanner(System.in);
            int hours;
            int minutes;
            int seconds;

            time(){
                System.out.print("Enter hours: ");
                hours = sc.nextInt();
                System.out.print("Enter minutes: ");
                minutes = sc.nextInt();
                System.out.print("Enter seconds: ");
                seconds = sc.nextInt();
            }

            time(time t1, time t2){
                seconds = t1.seconds-t2.seconds;
                if (seconds < 0){
                    seconds += 60;
                    minutes -= 1;
                }
                minutes = t1.minutes-t2.minutes;
                if (minutes < 0){
                    minutes += 60;
                    hours -= 1;
                }
                hours = t1.hours-t2.hours;

                System.out.println("Difference: "+hours+":"+minutes+":"+seconds);
            }
        }
        time t1 = new time();
        time t2 = new time();
        new time(t1, t2);
    }
}
