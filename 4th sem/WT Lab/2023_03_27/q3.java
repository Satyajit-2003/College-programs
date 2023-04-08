/*WAP in java to handle the following exceptions using nested try blocks. A.ArrayIndexOutOfBoundsException
B.NumberFormatException. */

public class q3 {
    
    public static void main(String[] args) {
        try{
            int[] arr = new int[5];
            try{
                System.out.println(arr[10]);
            }catch(NumberFormatException e){
                System.out.println("ArrayIndexOutOfBoundsException");
            }
        }catch(ArrayIndexOutOfBoundsException e){
            System.out.println("ArrayIndexOutOfBoundsException");
        }

        try{
            int a = Integer.parseInt("abc");
        }catch(NumberFormatException e){
            System.out.println("NumberFormatException");
        }
    }
}
