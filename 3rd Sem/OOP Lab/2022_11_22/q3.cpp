#include<iostream>
using namespace std;

void exception_handling(double a, double b){
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
        cout<<"ZERO DIVISON ERROR"<<endl;
        cout<<"Re-enter b: ";
        cin>>b;
        if (b == 0)
            throw b;
        double c = a/b;
        cout<<"Quotient: "<<c<<endl;
    }
}

int main(){
    double a, b;
    cout<<"Enter a: ";
    cin>>a;
    cout<<"Enter b: ";
    cin>>b;

    try{
        exception_handling(a,b);
    }catch(...){
        cout<<"Still b is 0\nTerminating...";
    }

    return 0;    
}