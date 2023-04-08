import java.util.Scanner;
class Detail{
    String name;
    String address;
    int meter_no;

    Detail(String name, String address, int meter_no){
        this.name = name;
        this.address = address;
        this.meter_no = meter_no;
    }

    void show(){
        System.out.println("Name: " + name);
        System.out.println("Address: " + address);
        System.out.println("Meter No: " + meter_no);
    }
}

class Powerbill extends Detail{
    int n;
    double total_bill;
    Powerbill(String name, String address, int meter_no) {
        super(name, address, meter_no);
        total_bill=0.0;
    }
    void cal(){
        if(n<=50){
            total_bill = n*2.5;
        }
        else if(n<=100){
            total_bill = 50*2.5 + (n-50)*5;
        }
        else if(n<=200){
            total_bill = 50*2.5 + 50*5 + (n-100)*6.5;
        }
        else{
            total_bill = 50*2.5 + 50*5 + 100*6.5 + (n-200)*7.5;
        }
    }

    void show(){
        super.show();
        System.out.println("Units Consumed: " + n);
        System.out.println("Total Bill: " + total_bill);
    }
}

public class q2 {
    
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.println("Enter Name: ");
        String name = scanner.nextLine();
        System.out.println("Enter Address: ");
        String address = scanner.nextLine();
        System.out.println("Enter Meter No: ");
        int meter_no = scanner.nextInt();
        System.out.println("Enter Units Consumed: ");
        int n = scanner.nextInt();
        Powerbill pb = new Powerbill(name, address, meter_no);
        pb.n = n;
        pb.cal();
        pb.show();
        scanner.close();
    }
}
