#include<iostream>
using namespace std;

class Shape{
    int a;
};

class Circle: public Shape{
    int rad;
    float area;
    public:
    void get_data(){
        cout<<"Enter radius: ";
        cin>>rad;
    }
    void show_area(){
        area = 3.14*rad*rad;
        cout<<"Area is: "<<area<<endl;
    }
};

class Triangle: public Shape{
    int base, hei;
    float area;
    public:
    void get_data(){
        cout<<"Enter base: ";
        cin>>base;
        cout<<"Enter height: ";
        cin>>hei;
    }
    void show_area(){
        area = 0.5*base*hei;
        cout<<"Area is: "<<area<<endl;
    }
};

class Rectangle: public Shape{
    int len, bred, area;
    public:
    void get_data(){
        cout<<"Enter length: ";
        cin>>len;
        cout<<"Enter breadth: ";
        cin>>bred;
    }
    void show_area(){
        area = len* bred;
        cout<<"Area is: "<<area<<endl;
    }
};

int main(){
    Circle c;
    Triangle t;
    Rectangle r;

    c.get_data();
    t.get_data();
    r.get_data();

    c.show_area();
    t.show_area();
    r.show_area();

    return 0;
}