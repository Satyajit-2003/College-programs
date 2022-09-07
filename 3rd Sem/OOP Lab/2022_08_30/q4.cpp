#include<iostream>
using namespace std;

//Create a class 'COMPLEX' to hold a complex number. Write a friend function to add two complex numbers. Write a main function to add two COMPLEX objects

class Complex{
    int real, img;
    public:
    void get(){
        cout<<"Enter real: ";
        cin>>real;
        cout<<"Enter imag: ";
        cin>>img;
    }
    void display(){
        cout<<real<<"+ i "<<img<<endl;
    }

    friend void add(Complex, Complex);
};

void add(Complex c1, Complex c2){
    c1.real = c1.real + c2.real;
    c1.img = c1.img + c2.img;
    cout<<"Sum is: ";
    c1.display();
}

int main(){
    Complex c1, c2;
    c1.get();
    c2.get();

    add(c1, c2);

    return 0;
}