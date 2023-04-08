import java.util.Scanner;

public class q2 {   
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        class Distance{
            int feet;
            int inches;

            void get(){
                System.out.print("Enter feet: ");
                feet = sc.nextInt();
                System.out.print("Enter inches: ");
                inches = sc.nextInt();
            }
    
            void add(Distance d1, Distance d2){
                feet = d1.feet + d2.feet;
                inches = d1.inches + d2.inches;
                if(inches >= 12){
                    inches -= 12;
                    feet++;
                }
            }
    
            void subtarct(Distance d1, Distance d2){
                feet = d1.feet - d2.feet;
                inches = d1.inches - d2.inches;
                if(inches < 0){
                    inches += 12;
                    feet--;
                }
            }
        }


        Distance d1 = new Distance();
        Distance d2 = new Distance();
        Distance d3 = new Distance();
        d1.get();
        d2.get();
        d3.add(d1, d2);
        System.out.println("Sum of distances: " + d3.feet + " feet " + d3.inches + " inches");
        d3.subtarct(d1, d2);
        System.out.println("Difference of distances: " + d3.feet + " feet " + d3.inches + " inches");

        sc.close();
    }
    
}
