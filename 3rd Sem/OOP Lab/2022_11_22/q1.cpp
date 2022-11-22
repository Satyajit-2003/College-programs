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
    catch(int x)
    {
        cout<<"ZERO DIVISON ERROR";
    }

    return 0;    
}