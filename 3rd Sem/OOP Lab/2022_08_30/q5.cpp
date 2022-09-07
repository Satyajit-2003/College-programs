#include<iostream>
using namespace std;

//Addition of complex numbers using constructor
class Complex{
    int real, imag;
    public:
    Complex(){
        cout<<"Enter real: ";
        cin>>real;
        cout<<"Enter imag: ";
        cin>>imag;
    }
    Complex(Complex &c1){
        cout<<"Enter real: ";
        cin>>real;
        cout<<"Enter imag: ";
        cin>>imag;
        cout<<"Sum is: "<<real + c1.real<<"+ i "<<imag + c1.imag;
    }
};

int main(){
    Complex c1;
    Complex c2(c1);

    return 0;
}