/* WAP in java to create user defined Exception called TIME_Exception where user
have to check given time is valid or not. If not valid then throw TIME_Exception. The
conditions are 0<hours<=23, 0<minutes<=59, 0<seconds<=59. 
 */

public class q5 {
    
    static class TIME_Exception extends Exception{
        TIME_Exception(String s){
            super(s);
        }
    }

    static void check_time(int h, int m, int s) throws TIME_Exception{
        if (h <= 0 || h > 23){
            throw new TIME_Exception("Invalid hours");
        }
        if (m <= 0 || m > 59){
            throw new TIME_Exception("Invalid minutes");
        }
        if (s <= 0 || s > 59){
            throw new TIME_Exception("Invalid seconds");
        }
    }

    public static void main(String[] args) {
        try{
            check_time(24, 0, 0);
        }catch(TIME_Exception e){
            System.out.println(e);
        }
    }
}
