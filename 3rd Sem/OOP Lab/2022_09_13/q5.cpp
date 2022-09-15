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
        area = 3.14*radius*rad
        cout<<"Area is: "<<area;
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
        area = 0.5*base*hei
        cout<<"Area is: "<<area;
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
        cout<<"Area is: "<<area;
    }
}