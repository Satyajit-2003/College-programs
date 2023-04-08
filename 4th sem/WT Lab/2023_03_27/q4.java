/*B.NumberFormatException. 4. WAP in java to handle following exceptions using try with multiple catch blocks. A. ArithmeticException
B. NullPointerException
C. ArrayIndexOutOfBoundsException
D. NumberFormatException
E. Exception */

public class q4 {
    
    static void excep_handler(int a){
        try{
            if (a == 1){
                int b = 10/0;
            }
            else if (a == 2){
                String s = null;
                System.out.println(s.length());
            }
            else if (a == 3){
                int[] arr = new int[5];
                System.out.println(arr[10]);
            }
            else if (a == 4){
                int b = Integer.parseInt("abc");
            }
        }catch(ArithmeticException e){
            System.out.println("ArithmeticException");
        }catch(NullPointerException e){
            System.out.println("NullPointerException");
        }catch(ArrayIndexOutOfBoundsException e){
            System.out.println("ArrayIndexOutOfBoundsException");
        }catch(NumberFormatException e){
            System.out.println("NumberFormatException");
        }
    }
        public static void main(String[] args) {
            excep_handler(1);
            excep_handler(2);
            excep_handler(3);
            excep_handler(4);
        }
    
}
