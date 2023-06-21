/*Write a program in java to create class Bank having a data member ROI--which should be an user
input for taking rate of interest of specific banks and member function Rate_of_Interest(). Make
Derived classes HDFC, SBI and Kotak of Bank class, and Rate_of_Interest() function which returns ROI. override the derived class functions using
a. method overriding concept
b. abstract class
c. Runtime polymorphism concept */

import java.util.Scanner;

class Bank{
    double ROI;
    void Rate_of_Interest(){
        System.out.println("Rate of Interest: "+ROI);
    }
}

class HDFC extends Bank{
    void Rate_of_Interest(){
        System.out.println("Rate of Interest: "+ROI);
    }
}

class SBI extends Bank{
    void Rate_of_Interest() {
        System.out.println("Rate of Interest: "+ROI);
    }
}

class Kotak extends Bank{
    void Rate_of_Interest(){
        System.out.println("Rate of Interest: "+ROI);
    }
}

public class q5{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the rate of interest: ");
        double roi = sc.nextDouble();
        Bank b = new Bank();
        b.ROI = roi;
        b.Rate_of_Interest();
        HDFC h = new HDFC();
        h.ROI = roi;
        h.Rate_of_Interest();
        SBI s = new SBI();
        s.ROI = roi;
        s.Rate_of_Interest();
        Kotak k = new Kotak();
        k.ROI = roi;
        k.Rate_of_Interest();
        sc.close();
    }
}