public class q4 {
    public static void main(String[] args){
        int rows = 4;
        for (int i = 0; i < rows; i++){
            for (int j = 0; j < i; j++)
                System.out.print("0");
            System.out.print("*");
            for (int j = 0; j < rows-i-1; j++)
                System.out.print("0");
            System.out.print("*");
            for (int j = 0; j < rows-i-1; j++)
                System.out.print("0");
            System.out.print("*");
            for (int j = 0; j < i; j++)
                System.out.print("0");

            System.out.print("\n");
        }
        System.out.print("\n\n");

        for (int i = 0; i < rows; i++){
            for (int j = 1; j < rows-i+1; j++)
                System.out.print(j);
            for (int j = 0; j < i; j++)
                System.out.print("*");
            for (int j = 0; j < i; j++)
                System.out.print("*");
            for (int j = rows-i; j > 0; j--)
                System.out.print(j);

            
            System.out.print("\n");
        }
    }
}
