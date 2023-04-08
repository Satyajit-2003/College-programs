public class q3 {
    static int count;

    q3(){
        count++;
    }

    public static void main(String[] args){
        new q3();
        new q3();
        new q3();
        System.out.println("Number of objects created: "+count);
    }
}
