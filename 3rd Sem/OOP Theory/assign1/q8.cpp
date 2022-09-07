#include<iostream>
using namespace std;

float perimeter(int rad){
    float peri = 3.14*2*rad;
    return peri;
}

int perimeter(int a, int b, int c){
    int peri = a+b+c;
    return peri;
}

int perimeter(int a, int b){
    int peri = 2*(a+b);
    return peri;
}

int main(){
    int p, q, r;
    cout<<"Enter a: ";
    cin>>p;
    cout<<"Enter b: ";
    cin>>q;
    cout<<"Enter c: ";
    cin>>r;

    cout<<"Perimeter of circle: "<<perimeter(p)<<endl;
    cout<<"Perimeter of triangle: "<<perimeter(p, q, r)<<endl;
    cout<<"Perimeter of rectangle: "<<perimeter(p, q)<<endl;
}