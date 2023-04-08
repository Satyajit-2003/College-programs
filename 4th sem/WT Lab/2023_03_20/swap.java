package swap;

public class swap {
    public void swap_func(int a, int b){
        int temp;
        temp = a;
        a = b;
        b = temp;
        System.out.println("a = " + a + " b = " + b);
    }
    public void swap_func(char a, char b){
        char temp;
        temp = a;
        a = b;
        b = temp;
        System.out.println("a = " + a + " b = " + b);
    }
    public void swap_func(double a, double b){
        double temp;
        temp = a;
        a = b;
        b = temp;
        System.out.println("a = " + a + " b = " + b);
    }

    public static void main(String[] args) {
        // Package name: swap
    }
}
