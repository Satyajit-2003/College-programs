#include<iostream>
#include<math.h>
using namespace std;

float area(int a, int b, int c){
    float s = (a + b + c)/2;
    return sqrt(s*(s-a)*(s-b)*(s-c));
}

float area(int a, int b){
    float temp = sqrt(((a*a)-(b*b))/4);
    return (0.5 * temp * b);
}

float area(int a){
    float temp = (sqrt(3)*a*a);
    return (temp /4);
}

int main(){
    int p, q, r;
    cout<<"Enter a: ";
    cin>>p;
    cout<<"Enter b: ";
    cin>>q;
    cout<<"Enter c: ";
    cin>>r;
    cout<<"Area of scalane tri: "<<area(p,q,r)<<endl;
    cout<<"Area of isoscales tri: "<<area(p,q)<<endl;
    cout<<"Area of equlaterial tri: "<<area(p)<<endl;

}
