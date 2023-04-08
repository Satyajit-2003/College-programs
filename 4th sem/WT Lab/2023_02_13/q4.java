import java.util.Scanner;

public class q4 {
    public static void main(String[] args){
        int size;
        System.out.print("Enter size of array: ");
        Scanner sc = new Scanner(System.in);
        size = sc.nextInt();
        int arr[] = new int[size];
        System.out.println("Enter elements of array: ");
        for(int i=0; i<size; i++){
            arr[i] = sc.nextInt();
        }

        int max = arr[0];
        int min = arr[0];
        for(int i=0; i<size; i++){
            if(arr[i] > max){
                max = arr[i];
            }
            if(arr[i] < min){
                min = arr[i];
            }
        }

        System.out.println("Maximum element: "+max);
        System.out.println("Minimum element: "+min);
        sc.close();
    }
}
