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

class Box: public Rectangle{
    int height;
    public:
    Box(int len, int bre, int hei): Rectangle(len, bre){
        height = hei;
    }
    void box_vol(){
        int vol = rad * bred * height;
        cout<<"Volume: "<<vol<<endl;
    }
};

int main(){
    Box b1(5,6,7);
    b1.area_cir();
    b1.area_rect();
    b1.box_vol();

    return 0;
}