#include<iostream>
using namespace std;

int main(){
    double a, b;
    cout<<"Enter a: ";
    cin>>a;
    cout<<"Enter b: ";
    cin>>b;

    try
    {
        if (b == 0){
            throw b;
        }
        double c = a/b;
        cout<<"Quotient: "<<c<<endl;
    }
    catch(double x)
    {
        cout<<"ZERO DIVISON ERROR";
    }
    
    try
    {
        if (b > a){
            throw b;
        }
        double c = a-b;
        cout<<"Difference: "<<c<<endl;
    }
    catch(double x)
    {
        cout<<"CANT SUBTRACT LARGER FROM SMALLER NUMBER";
    }

    return 0;    
}