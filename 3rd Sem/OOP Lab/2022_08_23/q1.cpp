#include<iostream>
using namespace std;

//Write a program that adds two complex numbers. The objects must be passed as function arguments

class complex{
    int real, img;
    public:
    void get(){
        cout<<"Enter the real part: ";
        cin>> real;
        cout<<"Enter the imaginary part: ";
        cin>> img;
    }
    void display(){
        cout<<real<<" + i"<<img<<endl;
    }
    friend complex add(complex num1,complex num2){
        num1.real = num1.real + num2.real;
        num1.img = num1.img + num2.img;
        return num1;
    }
};

int main(){
    complex a1,a2, res;
    a1.get();
    a2.get();
    cout<<"The numbers are: "<<endl;
    a1.display();
    a2.display();
    res = add(a1,a2);
    cout<<"The sum is: "<<endl;
    res.display();
}