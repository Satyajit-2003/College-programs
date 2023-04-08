import java.util.Scanner;

class Address {
    String address;

    void get_address() {}

    void set_address(Scanner scanner) {}
}

class HomeAddress extends Address {
    void get_address() {
        System.out.println("Home Address: " + address);
    }

    void set_address(Scanner scanner) {
        System.out.println("Enter Home Address: ");
        address = scanner.nextLine();
    }
}

class OfficeAddress extends Address {
    void get_address() {
        System.out.println("Office Address: " + address);
    }

    void set_address(Scanner scanner) {
        System.out.println("Enter Office Address: ");
        address = scanner.nextLine();
    }
}

class SchoolAddress extends Address {
    void get_address() {
        System.out.println("School Address: " + address);
    }

    void set_address(Scanner scanner) {
        System.out.println("Enter School Address: ");
        address = scanner.nextLine();
    }
}

public class q1 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        HomeAddress ha = new HomeAddress();
        OfficeAddress oa = new OfficeAddress();
        SchoolAddress sa = new SchoolAddress();

        ha.set_address(scanner);
        oa.set_address(scanner);
        sa.set_address(scanner);

        ha.get_address();
        oa.get_address();
        sa.get_address();

        scanner.close();
    }
}
