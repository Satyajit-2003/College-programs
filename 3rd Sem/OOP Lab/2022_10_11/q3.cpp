#include<iostream>
using namespace std;

class Circle{
    protected:
    int rad;
    public:
    Circle(int a){
        rad = a;
    }
    void area_cir(){
        float area = 3.14 * rad* rad;
        cout<<"Area: "<<area<<endl;
    }
};

class Rectangle: public Circle{
    protected:
    int bred;
    public:
    Rectangle(int len, int bre): Circle(len){
        bred = bre;
    }
    void area_rect(){
        int area = rad * bred;
        cout<<"Area: "<<area<<endl;
    }
};

class Cylinder: public Circle{
    int height;
    public:
    Cylinder(int radi, int hei): Circle(radi){
        height = hei;
    }
    void vol_cy(){
        float vol = 3.14 * rad * rad * height;
        cout<<"Volume: "<<vol;
    }
};

int main(){
    Rectangle r1(5,6);
    Cylinder c1(8,9);

    r1.area_cir();
    r1.area_rect();
    c1.area_cir();
    c1.vol_cy();

    return 0;
}

