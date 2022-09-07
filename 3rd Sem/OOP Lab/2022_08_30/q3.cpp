#include<iostream>
using namespace std;

// Write a program to find out the greatest between two numbers defined in two different classes by using friend function.

class c2;
class c1{
    int num1;
    public:
    void get(){
        cout<<"Enter num1: ";
        cin>>num1;
    }
    friend void largest(c1, c2);
};

class c2{
    int num1;
    public:
    void get(){
        cout<<"Enter num2: ";
        cin>>num1;
    }
    friend void largest(c1, c2);
};

void largest(c1 cl1, c2 cl2){
    if (cl1.num1 > cl2.num1)
        cout<<"Largest number is: "<<cl1.num1;
    else
        cout<<"Largest number is: "<<cl2.num1;
}

int main(){
    c1 class1;
    c2 class2;

    class1.get();
    class2.get();

    largest(class1, class2);

    return 0;

}