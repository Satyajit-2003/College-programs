public class q3 {
    public static void main(String[] args){
        int n1 = 0, n2 = 1, next = 0;
        
        while (next < 100){
            n1 = n2;
            n2 = next;
            System.out.print(next + " ");
            next = n1 + n2;
        }
    }
}
