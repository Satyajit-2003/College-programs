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

int main(){
    Rectangle r1(5,6);
    r1.area_cir();
    r1.area_rect();

    return 0;
}