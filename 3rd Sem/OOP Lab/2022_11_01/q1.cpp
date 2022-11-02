#include<iostream>
using namespace std;

/*Addition and multiplication operator overloading using complex class*/

class Complex{
    int real, imag;
    public:
    Complex(int a, int b){
        real = a;
        imag = b;
    }
    Complex operator+(Complex c1){
        c1.real = real + c1.real;
        c1.imag = imag + c1.imag;
        return c1;
    }
    Complex operator*(Complex &c1){
        Complex temp(0,0);
        temp.real = (real * c1.real) - (imag * c1.imag);
        temp.imag = (real * c1.imag) + (imag * c1.real);
        return temp;
    }
    friend void operator<<(ostream &out, Complex c){
        out<<c.real<<" +i"<<c.imag<<endl;
    }
};

int main(){
    Complex c1(2,5), c2(6,8), sum(0,0), prod(0,0);
    sum = c1 + c2;
    prod = c1 * c2;
    cout<<sum;
    cout<<prod;

    return 0;
}