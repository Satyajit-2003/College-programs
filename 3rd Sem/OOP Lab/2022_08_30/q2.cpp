#include<iostream>
using namespace std;

//Write a program to find out the area of one rectangle and one square by using a suitable friend function named as area() for it.

class Square;
class Rectangle{
    int len, bred;
    public:
    void get(){
        cout<<"Length: ";
        cin>>len;
        cout<<"Breadth: ";
        cin>>bred;
    }

    friend void area(Rectangle, Square);
};

class Square{
    int side;
    public:
    void get(){
        cout<<"Side: ";
        cin>>side;
    }

    friend void area(Rectangle, Square);
};

void area(Rectangle r1, Square s1){
    cout<<"Area of rectangle: "<<r1.len*r1.bred<<endl;
    cout<<"Area of square: "<<s1.side * s1.side<<endl;
}

int main(){
    Rectangle r;
    Square s;

    r.get();
    s.get();

    area(r,s);

    return 0;
}

